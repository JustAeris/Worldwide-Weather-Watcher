#include <Arduino.h>
#include <Wire.h>
#include "../lib/WWW/Sensors.h"
#include "../lib/WWW/FS.h"
#include "../lib/WWW/LED_Display.h"
#include "../lib/WWW/Settings.h"


#define STANDARD_MODE 0
#define ECO_MODE 1
#define MAINTENANCE_MODE 2
#define CONFIGURATION_MODE 3
char CURRENT_MODE = STANDARD_MODE;

#define NO_ERRORS 0
#define RTC_ERROR 1
#define GPS_ERROR 2
#define SENSOR_POLLING_ERROR 3
#define SENSOR_DATA_ERROR 4
#define SD_FULL_ERROR 5
#define SD_ACCESS_ERROR 6
char ERROR_CODE = NO_ERRORS;

#define IDLE_TIME_TO_MAINTENANCE (30 * 60000)
unsigned long LAST_INTERACTION_TIME = 0;
unsigned long LAST_LOG_TIME = 0;


void setup() {
    Wire.begin();
    Serial.begin(9600);
}


void loop() {
    unsigned long currentMillis = millis();

    if (CURRENT_MODE != MAINTENANCE_MODE) {
        unsigned long interval = CURRENT_MODE == ECO_MODE ? Configuration::LOG_INTERVAL() * 2 : Configuration::LOG_INTERVAL();

        if (currentMillis - LAST_LOG_TIME >= interval * 60000) {

            Result measures;
            getData(&measures);

            if (CURRENT_MODE == CONFIGURATION_MODE) {
                // Print the measures
                Serial.print("Luminosity:   ");
                Serial.println(measures.luminosity);
                Serial.print("Temperature:  ");
                Serial.println(measures.temperature);
                Serial.print("Humidity:     ");
                Serial.println(measures.humidity);
                Serial.print("Pressure:     ");
                Serial.println(measures.pressure);
                Serial.print("GPS:          ");
                Serial.println(measures.gps);
            }
            else {
                noInterrupts();
                saveMeasures(&measures);
                interrupts();
            }

            LAST_LOG_TIME = currentMillis;
        }
    }
    else {
        while (Serial.available()) {
            String input = Serial.readString();

            if (tryUpdateSetting(&input))
                Serial.println("Setting updated successfully");
            else
                Serial.println("Setting update failed");

            LAST_INTERACTION_TIME = currentMillis;
        }

        if (currentMillis - LAST_INTERACTION_TIME >= IDLE_TIME_TO_MAINTENANCE) {
            CURRENT_MODE = STANDARD_MODE;
        }
    }

    refreshLED(CURRENT_MODE, ERROR_CODE);
}

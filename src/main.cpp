#include <Arduino.h>
#include <Modes.h>
#include <Wire.h>
#include "../lib/WWW/LED_Display.h"


#define NO_ERRORS 0
#define RTC_ERROR 1
#define GPS_ERROR 2
#define SENSOR_POLLING_ERROR 3
#define SENSOR_DATA_ERROR 4
#define SD_FULL_ERROR 5
#define SD_ACCESS_ERROR 6
char ERROR_CODE = NO_ERRORS;


void setup() {
    Wire.begin();
    Serial.begin(9600);
}


void loop() {
    if (CURRENT_MODE != CONFIGURATION_MODE)
        work(CURRENT_MODE);
    else
        maintenance();

    refreshLED(CURRENT_MODE, ERROR_CODE);
}

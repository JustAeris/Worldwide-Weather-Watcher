#include "Modes.h"
#include <FS.h>
#include <Sensors.h>
#include <Settings.h>
#include "Arduino.h"

unsigned long LAST_INTERACTION_TIME = 0;
unsigned long LAST_LOG_TIME = 0;

/**
 * @brief Main working function
 *
 * @param mode Current mode
 */
void work(int mode) {
    unsigned long currentMillis = millis();

    unsigned long interval = mode == ECO_MODE ? Configuration::LOG_INTERVAL() * 2 : Configuration::LOG_INTERVAL();

    if (currentMillis - LAST_LOG_TIME >= interval * 60000) {

        Result measures;
        getData(&measures);

        if (mode == MAINTENANCE_MODE) {
            maintenance();
        }
        else {
            noInterrupts();
            saveMeasures(&measures);
            interrupts();
        }

        LAST_LOG_TIME = currentMillis;
    }
}


/**
 * Maintenance mode
 */
void maintenance() {

}

void configuration() {
    unsigned long currentMillis = millis();

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


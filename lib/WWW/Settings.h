#ifndef SETTINGS_H
#define SETTINGS_H

#include <Arduino.h>

typedef struct Configuration {
    char LUMIN;
    int LUMIN_LOW;
    int LUMIN_HIGH;
    char TEMP_AIR;
    char MIN_TEMP_AIR;
    char MAX_TEMP_AIR;
    char HYGR;
    char HYGR_MINT;
    char HYGR_MAXT;
    char PRESSURE;
    int PRESSURE_MIN;
    int PRESSURE_MAX;
    char LOG_INTERVAL;
    int MAX_FILE_SIZE;
} Configuration;

int tryUpdateSetting(String* input);

void loadSettingsFromEEPROM(Configuration* config);

void resetSettings(Configuration* config);

#endif //SETTINGS_H

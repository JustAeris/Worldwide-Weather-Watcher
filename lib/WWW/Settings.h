#ifndef SETTINGS_H
#define SETTINGS_H

#include <Arduino.h>

// EEPROM addresses
#define LUMIN_ADDRESS 0
#define LUMIN_LOW_ADDRESS 1
#define LUMIN_HIGH_ADDRESS 3
#define TEMP_AIR_ADDRESS 5
#define MIN_TEMP_AIR_ADDRESS 6
#define MAX_TEMP_AIR_ADDRESS 7
#define HYGR_ADDRESS 8
#define HYGR_MINT_ADDRESS 9
#define HYGR_MAXT_ADDRESS 10
#define PRESSURE_ADDRESS 11
#define PRESSURE_MIN_ADDRESS 12
#define PRESSURE_MAX_ADDRESS 14
#define LOG_INTERVAL_ADDRESS 16
#define MAX_FILE_SIZE_ADDRESS 17


class Configuration {
    public:
        static byte LUMIN();
        static int LUMIN_LOW();
        static int LUMIN_HIGH();
        static byte TEMP_AIR();
        static char MIN_TEMP_AIR();
        static char MAX_TEMP_AIR();
        static byte HYGR();
        static char HYGR_MINT();
        static char HYGR_MAXT();
        static byte PRESSURE();
        static int PRESSURE_MIN();
        static int PRESSURE_MAX();
        static byte LOG_INTERVAL();
        static int MAX_FILE_SIZE();
};

int tryUpdateSetting(String* input);

void resetSettings(Configuration* config);

#endif //SETTINGS_H

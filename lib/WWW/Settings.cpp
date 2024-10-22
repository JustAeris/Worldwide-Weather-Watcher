#include "Settings.h"
#include <EEPROM.h>

/**
 * @brief Tries to update a setting
 * @param input Console input
 * @return 1 on success, 0 on failure
 */
int tryUpdateSetting(String* input) {
    return 1;
}

/**
 * @brief Resets the settings (also resets the EEPROM)
 */
void resetSettings() {

}

/**
 * @brief Gets the luminance setting
 * @return Luminance setting as a byte
 */
byte Configuration::LUMIN() {
    byte res;
    EEPROM.get(LUMIN_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the low luminance setting
 * @return Low luminance setting as an int
 */
int Configuration::LUMIN_LOW() {
    int res;
    EEPROM.get(LUMIN_LOW_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the high luminance setting
 * @return High luminance setting as an int
 */
int Configuration::LUMIN_HIGH() {
    int res;
    EEPROM.get(LUMIN_HIGH_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the air temperature setting
 * @return Air temperature setting as a byte
 */
byte Configuration::TEMP_AIR() {
    byte res;
    EEPROM.get(TEMP_AIR_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the minimum air temperature setting
 * @return Minimum air temperature setting as a char
 */
char Configuration::MIN_TEMP_AIR() {
    char res;
    EEPROM.get(MIN_TEMP_AIR_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the maximum air temperature setting
 * @return Maximum air temperature setting as a char
 */
char Configuration::MAX_TEMP_AIR() {
    char res;
    EEPROM.get(MAX_TEMP_AIR_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the humidity setting
 * @return Humidity setting as a byte
 */
byte Configuration::HYGR() {
    byte res;
    EEPROM.get(HYGR_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the minimum humidity setting
 * @return Minimum humidity setting as a char
 */
char Configuration::HYGR_MINT() {
    char res;
    EEPROM.get(HYGR_MINT_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the maximum humidity setting
 * @return Maximum humidity setting as a char
 */
char Configuration::HYGR_MAXT() {
    char res;
    EEPROM.get(HYGR_MAXT_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the pressure setting
 * @return Pressure setting as a byte
 */
byte Configuration::PRESSURE() {
    byte res;
    EEPROM.get(PRESSURE_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the minimum pressure setting
 * @return Minimum pressure setting as an int
 */
int Configuration::PRESSURE_MIN() {
    int res;
    EEPROM.get(PRESSURE_MIN_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the maximum pressure setting
 * @return Maximum pressure setting as an int
 */
int Configuration::PRESSURE_MAX() {
    int res;
    EEPROM.get(PRESSURE_MAX_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the log interval setting
 * @return Log interval setting as a byte
 */
byte Configuration::LOG_INTERVAL() {
    byte res;
    EEPROM.get(LOG_INTERVAL_ADDRESS, res);
    return res;
}

/**
 * @brief Gets the maximum file size setting
 * @return Maximum file size setting as an int
 */
int Configuration::MAX_FILE_SIZE() {
    byte res;
    EEPROM.get(MAX_FILE_SIZE_ADDRESS, res);
    return res;
}
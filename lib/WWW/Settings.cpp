#include "Settings.h"

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
 * @param config Configuration struct
 */
void resetSettings(Configuration* config) {

}

/**
 * @brief Gets the luminance setting
 * @return Luminance setting as a byte
 */
byte Configuration::LUMIN() {
    return 0;
}

/**
 * @brief Gets the low luminance setting
 * @return Low luminance setting as an int
 */
int Configuration::LUMIN_LOW() {
    return 0;
}

/**
 * @brief Gets the high luminance setting
 * @return High luminance setting as an int
 */
int Configuration::LUMIN_HIGH() {
    return 0;
}

/**
 * @brief Gets the air temperature setting
 * @return Air temperature setting as a byte
 */
byte Configuration::TEMP_AIR() {
    return 0;
}

/**
 * @brief Gets the minimum air temperature setting
 * @return Minimum air temperature setting as a char
 */
char Configuration::MIN_TEMP_AIR() {
    return 0;
}

/**
 * @brief Gets the maximum air temperature setting
 * @return Maximum air temperature setting as a char
 */
char Configuration::MAX_TEMP_AIR() {
    return 0;
}

/**
 * @brief Gets the humidity setting
 * @return Humidity setting as a byte
 */
byte Configuration::HYGR() {
    return 0;
}

/**
 * @brief Gets the minimum humidity setting
 * @return Minimum humidity setting as a char
 */
char Configuration::HYGR_MINT() {
    return 0;
}

/**
 * @brief Gets the maximum humidity setting
 * @return Maximum humidity setting as a char
 */
char Configuration::HYGR_MAXT() {
    return 0;
}

/**
 * @brief Gets the pressure setting
 * @return Pressure setting as a byte
 */
byte Configuration::PRESSURE() {
    return 0;
}

/**
 * @brief Gets the minimum pressure setting
 * @return Minimum pressure setting as an int
 */
int Configuration::PRESSURE_MIN() {
    return 0;
}

/**
 * @brief Gets the maximum pressure setting
 * @return Maximum pressure setting as an int
 */
int Configuration::PRESSURE_MAX() {
    return 0;
}

/**
 * @brief Gets the log interval setting
 * @return Log interval setting as a byte
 */
byte Configuration::LOG_INTERVAL() {
    return 0;
}

/**
 * @brief Gets the maximum file size setting
 * @return Maximum file size setting as an int
 */
int Configuration::MAX_FILE_SIZE() {
    return 0;
}
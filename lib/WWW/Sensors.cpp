#include "Sensors.h"

/**
 * @brief Get the data from the sensors
 *
 * @param[out] array Buffer array to store the data
 */
void getData(Result *array) {

}

/**
 * @brief Get the luminosity data
 *
 * @return int Luminosity data
 */
int getLuminosity() {
    return 0;
}

/**
 * @brief Get the temperature data
 *
 * @return int Temperature data
 */
int getTemperature() {
    return 0;
}

/**
 * @brief Get the humidity data
 *
 * @return int Humidity data
 */
int getHumidity() {
    return 0;
}

/**
 * @brief Get the pressure data
 *
 * @return int Pressure data
 */
int getPressure() {
    return 0;
}

/**
 * @brief Get the GPS data
 *
 * @param ecoMode Is eco mode enabled
 * @return float GPS data
 */
float getGPS(char ecoMode = 0) {
    static float gps = 0;
    return 0;
}

/**
 * @brief Get the date and time data
 *
 * @return int Date and time data
 */
int getDateTime() {
    return 0;
}

#include "FS.h"
#include <SD.h>


int lastKnowDateTime[5];
char* currentFileName;

/**
 * @brief Save the measures in the SD card
 *
 * @param array Array containing the measures
 */
void saveMeasures(int* array) {

}

/**
 * @brief Write the data in the SD card
 *
 * @param array Array containing the data
 * @param fileName Name of the file
 * @param directory Directory where the file will be saved
 */
void writeData(int* array, const char* fileName, const char* directory) {

}

/**
 * @brief Read the data from the SD card
 *
 * @param array Array where the data will be saved
 * @param fileName Name of the file
 * @param directory Directory where the file is saved
 */
void readData(int* array, const char* fileName, const char* directory) {

}

/**
 * @brief Archive the current file and create a new one
 */
void archiveData() {

}

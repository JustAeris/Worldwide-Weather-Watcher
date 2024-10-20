#ifndef FS_H
#define FS_H
#include <Arduino.h>

void saveMeasures(String* array);

void writeData(String* array, String* fileName, String* directory);
void readData(String* array, String* fileName, String* directory);
void archiveData();

#endif //FS_H

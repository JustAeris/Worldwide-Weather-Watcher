#ifndef FS_H
#define FS_H

void saveMeasures(int* array);

void writeData(int* array, const char* fileName, const char* directory);
void readData(int* array, const char* fileName, const char* directory);
void archiveData();

#endif //FS_H

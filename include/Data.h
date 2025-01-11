#ifndef SKLEP_KASA_DATA_H
#define SKLEP_KASA_DATA_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class Data {
public:
    // Metoda zwracajaca dane z pliku CSV
    static std::vector<std::string> getValuesFromCSVRow(const std::string& fileName, int rowNumber);
    // Metoda zwarcajace liczbe wierszy w pliku CSV
    int getNumberOfRows(const std::string& fileName);
};

#endif //SKLEP_KASA_DATA_H

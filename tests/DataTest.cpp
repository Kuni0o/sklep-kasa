#include "gtest/gtest.h"
#include "../include/Data.h"
#include <fstream>

TEST(DataTest, GetValuesFromCSVRowValid) {
    std::ofstream file("test.csv");
    file << "Price,Code,Name,UnitType\n";
    file << "5.5,A001,Apple,s\n";
    file << "6.0,A002,Banana,w\n";
    file.close();

    Data data;

    std::vector<std::string> result = data.getValuesFromCSVRow("test.csv", 3);

    ASSERT_EQ(result.size(), 4);
    ASSERT_EQ(result[0], "6.0");
    ASSERT_EQ(result[1], "A002");
    ASSERT_EQ(result[2], "Banana");
    ASSERT_EQ(result[3], "w");

    std::remove("test.csv");
}

TEST(DataTest, GetValuesFromCSVRowInvalid) {
    std::ofstream file("test.csv");
    file << "Price,Code,Name,UnitType\n";
    file << "5.5,A001,Apple,s\n";
    file.close();

    Data data;

    std::vector<std::string> result = data.getValuesFromCSVRow("test.csv", 3);

    ASSERT_TRUE(result.empty());

    std::remove("test.csv");
}

TEST(DataTest, GetNumberOfRowsValid) {
    std::ofstream file("test.csv");
    file << "Price,Code,Name,UnitType\n";  // Nagłówek
    file << "5.5,A001,Apple,s\n";         // Pierwszy wiersz
    file << "6.0,A002,Banana,w\n";        // Drugi wiersz
    file.close();

    Data data;

    int rowCount = data.getNumberOfRows("test.csv");

    ASSERT_EQ(rowCount, 3);

    std::remove("test.csv");
}

TEST(DataTest, GetNumberOfRowsEmptyFile) {
    std::ofstream file("test_empty.csv");
    file.close();

    Data data;

    int rowCount = data.getNumberOfRows("test_empty.csv");

    ASSERT_EQ(rowCount, 0);

    std::remove("test_empty.csv");
}

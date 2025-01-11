cmake_minimum_required(VERSION 3.26)
project(sklep_kasa)

set(CMAKE_CXX_STANDARD 17)

# Aplikacja
add_executable(sklep_kasa
        src/main.cpp
        src/Product.cpp
        src/Data.cpp
        src/Shop.cpp
        src/Basket.cpp
)

# Testy
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(sklep_kasa_tests
        tests/BasketTest.cpp
        tests/ShopTest.cpp
        tests/DataTest.cpp
        src/Product.cpp
        src/Data.cpp
        src/Shop.cpp
        src/Basket.cpp
)

target_link_libraries(sklep_kasa_tests GTest::GTest GTest::Main)
add_test(NAME sklep_kasa_tests COMMAND sklep_kasa_tests)

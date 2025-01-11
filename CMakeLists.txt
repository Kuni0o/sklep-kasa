cmake_minimum_required(VERSION 3.26)
project(sklep_kasa)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(sklep_kasa src/Product.cpp src/Data.cpp src/Shop.cpp src/Basket.cpp tests/BasketTest.cpp tests/ShopTest.cpp)

target_link_libraries(sklep_kasa GTest::GTest GTest::Main)
add_test(NAME sklep_kasa COMMAND sklep_kasa)

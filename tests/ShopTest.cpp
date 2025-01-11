#include <gtest/gtest.h>
#include "../include/Shop.h"

TEST(ShopTest, AddProductIncreasesProductList) {
    Shop shop;

    Product product1(5.5, "A001", "Apple", "s");
    Product product2(6.0, "B002", "Banana", "w");

    shop.addProduct(product1);
    shop.addProduct(product2);

    auto products = shop.getProducts();

    ASSERT_EQ(products.size(), 2);
    ASSERT_EQ(products[0].getCode(), "A001");
    ASSERT_EQ(products[1].getCode(), "B002");
}

TEST(ShopTest, LoadProductsFromCSVLoadsCorrectly) {
    Shop shop;

    std::string testFile = "../data/test_products.csv";

    std::ofstream file(testFile);
    file << "price,code,name,unitType\n";
    file << "5.5,A001,Apple,s\n";
    file << "6.0,B002,Banana,w\n";
    file.close();

    shop.loadProductsFromCSV(testFile);

    auto products = shop.getProducts();

    ASSERT_EQ(products.size(), 2);
    ASSERT_EQ(products[0].getUnitPirce(), 5.5);
    ASSERT_EQ(products[0].getCode(), "A001");
    ASSERT_EQ(products[0].getName(), "Apple");
    ASSERT_EQ(products[0].getUnitType(), "s");

    ASSERT_EQ(products[1].getUnitPirce(), 6.0);
    ASSERT_EQ(products[1].getCode(), "B002");
    ASSERT_EQ(products[1].getName(), "Banana");
    ASSERT_EQ(products[1].getUnitType(), "w");
}

TEST(ShopTest, LoadProductsFromCSVHandlesEmptyFile) {
    Shop shop;

    std::string emptyFile = "../data/empty.csv";
    std::ofstream file(emptyFile);
    file.close();

    shop.loadProductsFromCSV(emptyFile);

    auto products = shop.getProducts();

    ASSERT_TRUE(products.empty());
}

TEST(ShopTest, LoadProductsFromCSVHandlesInvalidRows) {
    std::ofstream file("test_invalid_rows.csv");
    file << "Price,Code,Name,UnitType\n";
    file << "invalid_price,A001,Apple,s\n";
    file << "5.5,A002,Banana,s\n";
    file.close();

    Shop shop;
    ASSERT_NO_THROW(shop.loadProductsFromCSV("test_invalid_rows.csv"));

    auto products = shop.getProducts();
    ASSERT_EQ(products.size(), 1);
    EXPECT_EQ(products[0].getCode(), "A002");
    EXPECT_EQ(products[0].getName(), "Banana");
    EXPECT_DOUBLE_EQ(products[0].getUnitPirce(), 5.5);

    std::remove("test_invalid_rows.csv");
}

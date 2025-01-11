#include <gtest/gtest.h>
#include "../include/Basket.h"

TEST(BasketTest, AddProductWeight){
    Basket basket;
    Product product(5.5, "001", "Jablko", "w");

    ASSERT_TRUE(basket.addProduct(product,3));
    ASSERT_FALSE(basket.addProduct(product,-3.5));

    ASSERT_EQ(basket.getItemsByWeight().size(), 1);
    ASSERT_EQ(basket.getItemsByWeight()["001"], 3);
}

TEST(BasketTest, AddProductCount){
    Basket basket;
    Product product(8.5, "002", "Jablko", "s");
    Product product2(8.5, "003", "Pomarancza", "s");

    ASSERT_TRUE(basket.addProduct(product,3));
    ASSERT_FALSE(basket.addProduct(product2,3.5));
    ASSERT_FALSE(basket.addProduct(product2,-1));

    ASSERT_EQ(basket.getItemsByCount().size(), 1);
    ASSERT_EQ(basket.getItemsByCount()["002"], 3);
}

TEST(BasketTest, RemoveProductWeight){
    Basket basket;
    Product product(5.5, "001", "Jablko", "w");

    basket.addProduct(product,3);

    ASSERT_TRUE(basket.removeProduct(product, 1.5));
    ASSERT_EQ(basket.getItemsByWeight().size(), 1);
    ASSERT_EQ(basket.getItemsByWeight()["001"], 1.5);
    ASSERT_FALSE(basket.removeProduct(product, -1.5));
    ASSERT_FALSE(basket.removeProduct(product, 2));
    ASSERT_TRUE(basket.removeProduct(product, 1.5));
    ASSERT_EQ(basket.getItemsByWeight().size(), 0);
}

TEST(BasketTest, RemoveProductCount){
    Basket basket;
    Product product(5.5, "001", "Jablko", "s");

    basket.addProduct(product,3);

    ASSERT_TRUE(basket.removeProduct(product, 2));
    ASSERT_EQ(basket.getItemsByCount().size(), 1);
    ASSERT_EQ(basket.getItemsByCount()["001"], 1);
    ASSERT_FALSE(basket.removeProduct(product, -1));
    ASSERT_FALSE(basket.removeProduct(product, 2));
    ASSERT_FALSE(basket.removeProduct(product, 1.5));
    ASSERT_TRUE(basket.removeProduct(product, 1));
    ASSERT_EQ(basket.getItemsByCount().size(), 0);
}

TEST(BasketTest, CalculateTotal){
    Basket basket;

    Product product(5.5, "001", "Jablko", "s");
    Product product2(10.5, "002", "Liczi", "w");

    std::vector<Product> products = {product, product2};

    basket.addProduct(product,3);
    basket.addProduct(product2,2.5);

    double expectedTotal = (3 * 5.5) + (2.5 * 10.5);

    ASSERT_EQ(basket.calculateTotal(const_cast<std::vector<Product> &>(products)),expectedTotal);
}
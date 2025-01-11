#include <gtest/gtest.h>
#include "../include/Basket.h"
#include "../include/Product.h"

TEST(BasketTest, AddProductIncreasesCount){
    Basket basket;
    Product product(5.5, "001", "Jablko", "w");

    basket.addProduct(product,3);

    ASSERT_EQ(basket.getItemsByWeight().size(), 1);
}
#include "gtest/gtest.h"
#include "pch.h"
#include "../Lab02/DynamicArray.h"

TEST(DynamicArrayTest, ConstructTest) {
    double* d1 = new double[4];
    d1[0] = 1;
    d1[1] = 1;
    d1[2] = 1;
    d1[3] = 2;
    DynamicArray<double>* D1 = new DynamicArray<double>(4, d1);
    EXPECT_EQ(d1[0], D1->Get(0));
    EXPECT_EQ(d1[1], D1->Get(1));
    EXPECT_EQ(d1[2], D1->Get(2));
    EXPECT_EQ(d1[3], D1->Get(3));

  
}

TEST(DynamicArrayTest, SetTest) {

    DynamicArray<int>* D2 = new DynamicArray<int>(4);
    D2->Set(0, 12);
    D2->Set(1, 13);
    D2->Set(2, 14);
    D2->Set(3, 15);
    EXPECT_EQ(D2->Get(0), 12);
    EXPECT_EQ(D2->Get(1), 13);
    EXPECT_EQ(D2->Get(2), 14);
    EXPECT_EQ(D2->Get(3), 15);


}
TEST(DynamicArrayTest, InsertTest) {
    DynamicArray<int>* D2 = new DynamicArray<int>(4);
    D2->Set(0, 12);
    D2->Set(1, 13);
    D2->Set(2, 14);
    D2->Set(3, 15);
    D2->InsertAt(2, 1123);
    EXPECT_EQ(D2->Get(2), 1123);
}
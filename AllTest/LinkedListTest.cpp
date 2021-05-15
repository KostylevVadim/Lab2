#include "pch.h"
#include "gtest/gtest.h"
#include "../Lab02/LinkedList.h"
//Поразбивать
TEST(LinkedListTest, FunctionTest) {
    LinkedList<double> L1;
    L1.Prepend(1.2);
    L1.Prepend(2.2);
    L1.Append(8.8);
    EXPECT_EQ(8.8, L1.GetLast());
    EXPECT_EQ(2.2, L1.GetFirst());
    EXPECT_EQ(L1.GetLength(), 3);
    L1.Set(1, 1.1);
    EXPECT_EQ(1.1, L1.Get(1));
    double* l2 = new double[3];
    l2[0] = 12.1;
    l2[1] = 10;
    l2[2] = 1;
    L1.InsertAt(2, 1);
    EXPECT_EQ(L1.Get(2), 1);
    L1.Resize(4);
    EXPECT_EQ(L1.GetLength(), 4);
    L1.InsertAt(2, 1);
    EXPECT_EQ(L1.Get(2), 1);
    L1.Resize(4);
    EXPECT_EQ(L1.GetLength(), 4);

}
TEST(LinkedListTest, Concat_Sub_Test) {
    double* l2 = new double[3];
    l2[0] = 12.1;
    l2[1] = 10;
    l2[2] = 1;
    
    LinkedList<double>* L3 = new LinkedList<double>(l2, 3);
    LinkedList<double>* L2 = new LinkedList<double>(l2, 3);
    EXPECT_EQ(L3->Get(0), l2[0]);
    LinkedList<double> Sub = *L2->GetSubList(1, 2);
    EXPECT_EQ(Sub.GetLength(), 1);
    LinkedList<double> Con = *L2->Concat(L3);
    EXPECT_EQ(Con.GetLength(), 6);
    for (int i = 0; i < 3; i++)
        EXPECT_EQ(Con.Get(i), l2[i]);
}
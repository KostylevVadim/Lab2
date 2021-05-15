#include "pch.h"
#include "gtest/gtest.h"
#include "../Lab02/ListSequence.h"

TEST(ListSequenceTest, Functest) {
    double* d1 = new double[4];
    d1[0] = 1;
    d1[1] = 1;
    d1[2] = 1;
    d1[3] = 2;
    double* d2 = new double[4];
    d2[0] = 213.1;
    d2[1] = 32.12;
    d2[2] = 43.12;
    d2[3] = 5657.3;
    ListSequence<double>D1(d1, 4);
    ListSequence<double>* Copy = new ListSequence<double>(D1);
    for (int i = 0; i < Copy->GetLength(); i++)
        EXPECT_EQ(Copy->Get(i), D1.Get(i));
    Copy->Append(0.0);
    EXPECT_EQ(0.0, Copy->GetLast());
    Copy->Prepend(123.1);
    EXPECT_EQ(123.1, Copy->GetFirst());
    Copy->InsertAt(3, 2);
    EXPECT_EQ(3, Copy->Get(2));
}
TEST(ListSequenceTest, Conc_Sub_Test) {
    double* d1 = new double[4];
    d1[0] = 1;
    d1[1] = 1;
    d1[2] = 1;
    d1[3] = 2;
    double* d2 = new double[4];
    d2[0] = 213.1;
    d2[1] = 32.12;
    d2[2] = 43.12;
    d2[3] = 5657.3;
    ListSequence<double>D1(d1, 4);
    ListSequence<double>* Copy = new ListSequence<double>(D1);
    
    Copy->Append(0.0);
    
    Copy->Prepend(123.1);
    
    Copy->InsertAt(3, 2);

    ListSequence<double>* Copy1 = new ListSequence<double>(D1);

    ListSequence<double>* Sub = new ListSequence<double>(*Copy1->GetSubsequence(2, 4));
    for (int i = 0; i < Sub->GetLength(); i++)
        EXPECT_EQ(Sub->Get(i), Copy1->Get(i + Sub->GetLength()));

    ListSequence<double>* seq = new ListSequence<double>;
    seq = Copy1->Concat(Copy);
    for (int i = 0; i < Copy1->GetLength(); i++)
        EXPECT_EQ(Copy1->Get(i), seq->Get(i));

    for (int i = 0; i < Copy->GetLength(); i++)
        EXPECT_EQ(Copy->Get(i), seq->Get(i + Copy1->GetLength()));
}
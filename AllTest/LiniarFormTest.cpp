#include "pch.h"
#include "gtest/gtest.h"
#include "../Lab02/LiniarForm.h"
#include "../Lab02/ArraySequence.h"

TEST(TestLiniarform, TestLiniarCreation) {
    double* dta = new double[10];
    for (int i = 0; i < 10; i++)
        dta[i] = i + 1.1;
    LiniarForm<double>* L1 = new LiniarForm<double>(dta, 10);
    int* dta1 = new int[10];
    for (int i = 0; i < 10; i++)
        dta1[i] = i;
    LiniarForm<int>* InL = new LiniarForm<int>(dta1, 10);
    LiniarForm<int>* Cop = new LiniarForm<int>(*InL);
    for (int i = 0; i < Cop->GetSize(); i++)
        EXPECT_TRUE(InL->Get(i) == Cop->Get(i) && L1->Get(i) == dta[i]);
}
TEST(TestLiniarform, TestLiniarSumMin) {
    int* dta1 = new int[10];
    for (int i = 0; i < 10; i++)
        dta1[i] = i;
    LiniarForm<int>* InL = new LiniarForm<int>(dta1, 10);
    LiniarForm<int>* CopSum = new LiniarForm<int>(*InL);
    CopSum->Sum(*InL);
    for (int i = 0; i < CopSum->GetSize(); i++)
        EXPECT_EQ(CopSum->Get(i), 2 * InL->Get(i));
    LiniarForm<int>* CopMin = new LiniarForm<int>(*InL);
    CopMin->Min(*InL);
    for (int i = 0; i < CopMin->GetSize(); i++)
        EXPECT_EQ(CopMin->Get(i), 0);
}
TEST(TestLiniarform, TestMult) {
    int* dta1 = new int[10];
    for (int i = 0; i < 10; i++)
        dta1[i] = i;
    LiniarForm<int>* InL = new LiniarForm<int>(dta1, 10);
    LiniarForm<int>* CopMult = new LiniarForm<int>(*InL);
    int x = 7;
    CopMult->Mult(x);
    for (int i = 0; i < CopMult->GetSize(); i++)
        EXPECT_EQ(CopMult->Get(i), InL->Get(i) * x);
}
TEST(TestLiniarform, TestValue) {
    int* dta1 = new int[4];
    for (int i = 0; i < 4; i++)
        dta1[i] = i + 1;
    LiniarForm<int>* InL = new LiniarForm<int>(dta1, 4);
    ArraySequence<int>* A = new ArraySequence<int>(dta1, 4);
    int x = InL->value(A);
    EXPECT_EQ(x, 30);
}
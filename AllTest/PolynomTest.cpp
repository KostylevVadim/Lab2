#include "pch.h"
#include "gtest/gtest.h"
#include "../Lab02/Polynom.h"

TEST(TestPoly, TestName) {
	ArraySequence<double>* D2 = new ArraySequence<double>;
	D2->Prepend(1.3);
	D2->Prepend(3.4);
	D2->Append(4.123);
	D2->Append(4.7);
	EXPECT_EQ(3.4, D2->GetFirst());
	EXPECT_EQ(4.7, D2->GetLast());
	Polynom<double>* Poly = new Polynom<double>(*D2);
	for (int i = 0; i < Poly->GetSize(); i++)
		EXPECT_EQ(D2->Get(i), Poly->Get(i));
	Polynom<double>* Sum = new Polynom<double>(*Poly);
	Sum->Sum(*Poly);
	for (int i = 0; i < Sum->GetSize(); i++)
		EXPECT_EQ(Sum->Get(i), 2 * Poly->Get(i));
	Sum->Mult(*Sum);
	double* v = new double[7];
	v[0] = 46.24;
	v[1] = 35.36;
	v[2] = 118.90559999999999;
	v[3] = 170.7192;
	v[4] = 116.87651600000001;
	v[5] = 155.02480000000003;
	v[6] = 88.36;
	for (int i = 0; i < Sum->GetSize(); i++)
		EXPECT_DOUBLE_EQ(Sum->Get(i), v[i]);
	ArraySequence<double>* X = new ArraySequence<double>;
	X->Append(1);
	X->Append(2);
	X->Append(3);
	Polynom<double>* XY = new Polynom<double>(*X);
	XY->Byvalue(6);
	for (int i = 0; i < XY->GetSize(); i++)
		EXPECT_DOUBLE_EQ(XY->Get(i), X->Get(i) * 6);
	XY->insert(123, 2);
	EXPECT_DOUBLE_EQ(123, XY->Get(2));
	XY->totheend(333);
	EXPECT_DOUBLE_EQ(XY->Get(XY->GetSize() - 1), 333);
	Polynom<double>* A1 = new Polynom<double>;
	A1->tothebeg(1.0);
	A1->tothebeg(0.0);
	A1->tothebeg(1.0);
	Polynom<double>* A2 = new Polynom<double>;
	A2->tothebeg(1.0);
	A2->tothebeg(1.0);
	A2->tothebeg(1.0);
	double x = A2->Value(1);
	EXPECT_DOUBLE_EQ(x, 3);

	Polynom<double>* T = new Polynom<double>(*A2->Superposition(A1));
	Polynom<double>* T1 = new Polynom<double>(*A1->Superposition(A2));
	EXPECT_DOUBLE_EQ(T->Get(0), 3);
	EXPECT_DOUBLE_EQ(T->Get(1), 0);
	EXPECT_DOUBLE_EQ(T->Get(2), 3);
	EXPECT_DOUBLE_EQ(T->Get(3), 0);
	EXPECT_DOUBLE_EQ(T->Get(4), 1);

	EXPECT_DOUBLE_EQ(T1->Get(0), 2);
	EXPECT_DOUBLE_EQ(T1->Get(1), 2);
	EXPECT_DOUBLE_EQ(T1->Get(2), 3);
	EXPECT_DOUBLE_EQ(T1->Get(3), 2);
	EXPECT_DOUBLE_EQ(T1->Get(4), 1);
	Polynom<int>* T2 = new Polynom<int>;
	T2->tothebeg(1);
	T2->tothebeg(1);
	T2->tothebeg(1);
	Polynom<int>* T3 = new Polynom<int>;
	T3->tothebeg(1);
	T3->tothebeg(1);
	T3->tothebeg(1);
	Polynom<int>* R = new Polynom<int>(*T2->Superposition(T3));
	EXPECT_DOUBLE_EQ(R->Get(0), 3);
	EXPECT_DOUBLE_EQ(R->Get(1), 3);
	EXPECT_DOUBLE_EQ(R->Get(2), 4);
	EXPECT_DOUBLE_EQ(R->Get(3), 2);
	EXPECT_DOUBLE_EQ(R->Get(4), 1);

	Polynom<int>* T4 = new Polynom<int>;
	Polynom<int>* T5 = new Polynom<int>;
	T4->totheend(1);
	T4->totheend(2);
	T4->totheend(3);
	T5->totheend(4);
	T5->totheend(5);
	Polynom<int>* R1 = new Polynom<int>(*T4->Superposition(T5));
	EXPECT_DOUBLE_EQ(R1->Get(0), 57);
	EXPECT_DOUBLE_EQ(R1->Get(1), 130);
	EXPECT_DOUBLE_EQ(R1->Get(2), 75);
	Polynom<int>* M1 = new Polynom<int>;
	M1->totheend(1);
	M1->totheend(1);
	Polynom<int>* M2 = new Polynom<int>;
	M2->totheend(1);
	M2->totheend(1);
	Polynom<int>* M3 = new Polynom<int>;
	M3->totheend(1);
	M3->totheend(2);
	M3->totheend(1);
	M2->Mult(*M1);
	for (int i = 0; i < M3->GetSize(); i++)
		EXPECT_EQ(M3->Get(i), M2->Get(i));
	M3->Sum(*M1);
	M2->Sum(*M1);
	for (int i = 0; i < M3->GetSize(); i++)
		EXPECT_EQ(M3->Get(i), M2->Get(i));
}
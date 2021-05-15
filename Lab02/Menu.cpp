#include "Menu.h"


void Menu() {
    cout << "Enter type, that you want:\n1.Int\n2.Double\n3.Complex\n";
    int usrch;
    cin >> usrch;
    cout << "\n";
    if (usrch == 1) {
        cout << "Enter two polynoms:\n";
        cout << "Enter length of first polynom: \n";
        int l1;
        cin >> l1;
        cout << "Enter coefs of your polynom from x^0: \n";
        int* data1 = new int[l1];
        for (int i = 0; i < l1; i++)
            cin >> data1[i];
        Polynom<int>* Data1 = new Polynom<int>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        int* data2 = new int[l2];
        for (int i = 0; i < l2; i++)
            cin >> data2[i];
        Polynom<int>* Data2 = new Polynom<int>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printifo();
        Data2->Printifo();
        cout << "\nwhat do you want:\n1.Sum\n2.Mult\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Get Superposition for first by second\n8.Get Superposition for second by first\n9.Print information\n10.Quiet\n";
        int usch = 0;
        cin >> usch;
        while (usch != 10) {
            switch (usch)
            {
            case 1: {
                Polynom<int>* A = new Polynom<int>(*Data1);
                Polynom<int>* B = new Polynom<int>(*Data2);
                A->Sum(*B);
                A->Printifo();
                break;
            }
            case 2: {
                Polynom<int>* A = new Polynom<int>(*Data1);
                Polynom<int>* B = new Polynom<int>(*Data2);
                A->Mult(*B);
                A->Printifo();
                break;
            }
            case 3: {
                cout << "Enter your value:\n";
                int m;
                cin >> m;
                Data1->Byvalue(m);
                Data1->Printifo();
                break;
            }
            case 4: {
                cout << "Enter your value:\n";
                int x;
                cin >> x;
                Data2->Byvalue(x);
                Data2->Printifo();
                break;
            }
            case 5: {
                cout << "Enter your value:\n";
                int x;
                cin >> x;
                cout << "\n" << Data1->Value(x);
                break;
            }
            case 6: {
                cout << "Enter your value:\n";
                int x;
                cin >> x;
                cout << "\n" << Data2->Value(x);
                break;
            }
            case 7: {
                Polynom<int>* Sup = new Polynom<int>(*Data1->Superposition(Data2));
                Sup->Printifo();
                break;
            }
            case 8: {
                Polynom<int>* Sup = new Polynom<int>(*Data2->Superposition(Data1));
                Sup->Printifo();
                break;
            }
            case 9: {
                Data1->Printifo();
                Data2->Printifo();
            }
            case 10: {
                break;
            }

            default:
                break;
            }
            cout << "\n";
            cin >> usch;
        }


    };
    if (usrch == 2) {
        cout << "Enter two polynoms:\n";
        cout << "Enter length of first polynom: \n";
        int l1;
        cin >> l1;
        cout << "Enter coefs of your polynom from x^0: \n";
        double* data1 = new double[l1];
        for (int i = 0; i < l1; i++)
            cin >> data1[i];
        Polynom<double>* Data1 = new Polynom<double>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        double* data2 = new double[l2];
        for (int i = 0; i < l2; i++)
            cin >> data2[i];
        Polynom<double>* Data2 = new Polynom<double>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printifo();
        Data2->Printifo();
        cout << "\nwhat do you want:\n1.Sum\n2.Mult\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Get Superposition for first by second\n8.Get Superposition for second by first\n9.Print information\n10.Quiet\n";
        int usch = 0;
        cin >> usch;
        while (usch != 9) {
            switch (usch)
            {
            case 1: {
                Polynom<double>* A = new Polynom<double>(*Data1);
                Polynom<double>* B = new Polynom<double>(*Data2);
                A->Sum(*B);
                A->Printifo();
                break;
            }
            case 2: {
                Polynom<double>* A = new Polynom<double>(*Data1);
                Polynom<double>* B = new Polynom<double>(*Data2);
                A->Mult(*B);
                A->Printifo();
                break;
            }
            case 3: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                Data1->Byvalue(x);
                Data1->Printifo();
                break;
            }
            case 4: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                Data2->Byvalue(x);
                Data2->Printifo();
                break;
            }
            case 5: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                cout << "\n" << Data1->Value(x);
                break;
            }
            case 6: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                cout << "\n" << Data2->Value(x);
                break;
            }
            case 7: {
                Polynom<double>* Sup = new Polynom<double>(*Data1->Superposition(Data2));
                Sup->Printifo();
                break;
            }
            case 8: {
                Polynom<double>* Sup = new Polynom<double>(*Data2->Superposition(Data1));
                Sup->Printifo();
                break;
            }
            case 9: {
                Data1->Printifo();
                Data2->Printifo();
            }
            case 10: {
                break;
            }

            default:
                break;
            }
            cout << "\n";
            cin >> usch;
        }

    };
    if (usrch == 3) {
        cout << "Enter two polynoms:\n";
        cout << "Enter length of first polynom: \n";
        int l1;
        cin >> l1;
        cout << "Enter coefs of your polynom from x^0: \n";
        Complex* data1 = new Complex[l1];
        for (int i = 0; i < l1; i++)
            cin >> data1[i];
        Polynom<Complex>* Data1 = new Polynom<Complex>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        Complex* data2 = new Complex[l2];
        for (int i = 0; i < l2; i++)
            cin >> data2[i];
        Polynom<Complex>* Data2 = new Polynom<Complex>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printifo();
        Data2->Printifo();
        cout << "\nwhat do you want:\n1.Sum\n2.Mult\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Get Superposition for first by second\n8.Get Superposition for second by first\n9.Print information\n10.Quiet\n";
        int usch = 0;
        cin >> usch;
        while (usch != 10) {
            switch (usch)
            {
            case 1: {
                Polynom<Complex>* A = new Polynom<Complex>(*Data1);
                Polynom<Complex>* B = new Polynom<Complex>(*Data2);
                A->Sum(*B);
                A->Printifo();
                break;
            }
            case 2: {
                Polynom<Complex>* A = new Polynom<Complex>(*Data1);
                Polynom<Complex>* B = new Polynom<Complex>(*Data2);
                A->Mult(*B);
                A->Printifo();
                break;
            }
            case 3: {
                cout << "Enter your value:\n";
                Complex x;
                Data1->Byvalue(x);
                Data1->Printifo();
                break;
            }
            case 4: {
                cout << "Enter your value:\n";
                Complex x;
                Data2->Byvalue(x);
                Data2->Printifo();
                break;
            }
            case 5: {
                cout << "Enter your value:\n";
                Complex x;
                cout << Data1->Value(x);
                break;
            }
            case 6: {
                cout << "Enter your value:\n";
                Complex x;
                cout << Data2->Value(x);
                break;
            }
            case 7: {
                Polynom<Complex>* Sup = new Polynom<Complex>(*Data1->Superposition(Data2));
                Sup->Printifo();
                break;
            }
            case 8: {
                Polynom<Complex>* Sup = new Polynom<Complex>(*Data2->Superposition(Data1));
                Sup->Printifo();
                break;
            }
            case 9: {
                Data1->Printifo();
                Data2->Printifo();
            }
            case 10: {
                break;
            }

            default:
                break;
            }
            cout << "\n";
            cin >> usch;
        }

    };
}
void Randomvalues() {
    srand(unsigned(time(0)));
    cout << "Enter type, that you want:\n1.Int\n2.Double\n3.Complex\n";
    int usrch;
    cin >> usrch;
    cout << "\n";
    if (usrch == 1) {
        cout << "Enter two polynoms:\n";
        cout << "Enter length of first polynom: \n";
        int l1;
        cin >> l1;
        cout << "Coefs of your polynom from x^0 will be generated: \n";
        int* data1 = new int[l1];
        for (int i = 0; i < l1; i++)
            data1[i]= rand()%1000;
        Polynom<int>* Data1 = new Polynom<int>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Coefs of your polynom from x^0 will be generated: \n";
        int* data2 = new int[l2];
        for (int i = 0; i < l2; i++)
            data2[i] = rand() % 1000;
        Polynom<int>* Data2 = new Polynom<int>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printifo();
        Data2->Printifo();
        cout << "\nwhat do you want:\n1.Sum\n2.Mult\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Get Superposition for first by second\n8.Get Superposition for second by first\n9.Print infomation\n10.Quit";
        int usch = 0;
        
        while (usch != 10) {
            cin >> usch;
            switch (usch)
            {
            case 1: {
                Polynom<int>* A = new Polynom<int>(*Data1);
                Polynom<int>* B = new Polynom<int>(*Data2);
                A->Sum(*B);
                A->Printifo();
                break;
            }
            case 2: {
                Polynom<int>* A = new Polynom<int>(*Data1);
                Polynom<int>* B = new Polynom<int>(*Data2);
                A->Mult(*B);
                A->Printifo();
                break;
            }
            case 3: {
                cout << "Enter your value:\n";
                int m;
                cin >> m;
                Data1->Byvalue(m);
                Data1->Printifo();
                break;
            }
            case 4: {
                cout << "Enter your value:\n";
                int x;
                cin >> x;
                Data2->Byvalue(x);
                Data2->Printifo();
                break;
            }
            case 5: {
                cout << "Enter your value:\n";
                int x;
                cin >> x;
                cout << "\n" << Data1->Value(x);
                break;
            }
            case 6: {
                cout << "Enter your value:\n";
                int x;
                cin >> x;
                cout << "\n" << Data2->Value(x);
                break;
            }
            case 7: {
                Polynom<int>* Sup = new Polynom<int>(*Data1->Superposition(Data2));
                Sup->Printifo();
                break;
            }
            case 8: {
                Polynom<int>* Sup = new Polynom<int>(*Data2->Superposition(Data1));
                Sup->Printifo();
                break;
            }
            case 9: {
                Data1->Printifo();
                Data2->Printifo();
            }
            case 10: {
                break;
            }

            default:
                break;
            }
            cout << "\n";
            
        }


    };
    if (usrch == 2) {
        cout << "Enter two polynoms:\n";
        cout << "Enter length of first polynom: \n";
        int l1;
        cin >> l1;
        cout << "Coefs of your polynom from x^0 will be generated: \n";
        double* data1 = new double[l1];
        for (int i = 0; i < l1; i++) {
            data1[i] = (rand()%1000000+0.1*(rand()%9+0.0))/1000;
        }
        Polynom<double>* Data1 = new Polynom<double>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Coefs of your polynom from x^0 will be generated: \n";
        double* data2 = new double[l2];
        for (int i = 0; i < l2; i++)
            data2[i] = (rand() % 1000000 + 0.1 * (rand() % 9 + 0.0)) / 1000;
        Polynom<double>* Data2 = new Polynom<double>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printifo();
        Data2->Printifo();
        cout << "\nwhat do you want:\n1.Sum\n2.Mult\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Get Superposition for first by second\n8.Get Superposition for second by first\n9.Print infomation\n10.Quit";
        int usch = 0;
        
        while (usch != 10) {
            cin >> usch;
            switch (usch)
            {
            case 1: {
                Polynom<double>* A = new Polynom<double>(*Data1);
                Polynom<double>* B = new Polynom<double>(*Data2);
                A->Sum(*B);
                A->Printifo();
                break;
            }
            case 2: {
                Polynom<double>* A = new Polynom<double>(*Data1);
                Polynom<double>* B = new Polynom<double>(*Data2);
                A->Mult(*B);
                A->Printifo();
                break;
            }
            case 3: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                Data1->Byvalue(x);
                Data1->Printifo();
                break;
            }
            case 4: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                Data2->Byvalue(x);
                Data2->Printifo();
                break;
            }
            case 5: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                cout << "\n" << Data1->Value(x);
                break;
            }
            case 6: {
                cout << "Enter your value:\n";
                double x;
                cin >> x;
                cout << "\n" << Data2->Value(x);
                break;
            }
            case 7: {
                Polynom<double>* Sup = new Polynom<double>(*Data1->Superposition(Data2));
                Sup->Printifo();
                break;
            }
            case 8: {
                Polynom<double>* Sup = new Polynom<double>(*Data2->Superposition(Data1));
                Sup->Printifo();
                break;
            }
            case 9: {
                Data1->Printifo();
                Data2->Printifo();
            }
            case 10: {
                break;
            }

            default:
                break;
            }
            cout << "\n";
        }

    };
    if (usrch == 3) {
        cout << "Enter two polynoms:\n";
        cout << "Enter length of first polynom: \n";
        int l1;
        cin >> l1;
        cout << "Coefs of your polynom from x^0 will be generated: \n";
        Complex* data1 = new Complex[l1];
        for (int i = 0; i < l1; i++) {
            data1[i].R = (rand() % 1000000 + 0.0) / 1000;
            data1[i].I = (rand() % 1000000 + 0.0) / 1000;
        }
        Polynom<Complex>* Data1 = new Polynom<Complex>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        Complex* data2 = new Complex[l2];
        for (int i = 0; i < l2; i++) {
            data2[i].R = (rand() % 1000000+0.0)/1000;
            data2[i].I = (rand() % 1000000 + 0.0) / 1000;
        }
        Polynom<Complex>* Data2 = new Polynom<Complex>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printifo();
        Data2->Printifo();
        cout << "\nwhat do you want:\n1.Sum\n2.Mult\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Get Superposition for first by second\n8.Get Superposition for second by first\n9.Print infomation\n10.Quit";
        int usch = 0;
        
        while (usch != 10) {
            cin >> usch;
            switch (usch)
            {
            case 1: {
                Polynom<Complex>* A = new Polynom<Complex>(*Data1);
                Polynom<Complex>* B = new Polynom<Complex>(*Data2);
                A->Sum(*B);
                A->Printifo();
                break;
            }
            case 2: {
                Polynom<Complex>* A = new Polynom<Complex>(*Data1);
                Polynom<Complex>* B = new Polynom<Complex>(*Data2);
                A->Mult(*B);
                A->Printifo();
                break;
            }
            case 3: {
                cout << "Enter your value:\n";
                Complex x;
                Data1->Byvalue(x);
                Data1->Printifo();
                break;
            }
            case 4: {
                cout << "Enter your value:\n";
                Complex x;
                Data2->Byvalue(x);
                Data2->Printifo();
                break;
            }
            case 5: {
                cout << "Enter your value:\n";
                Complex x;
                cout << Data1->Value(x);
                break;
            }
            case 6: {
                cout << "Enter your value:\n";
                Complex x;
                cout << Data2->Value(x);
                break;
            }
            case 7: {
                Polynom<Complex>* Sup = new Polynom<Complex>(*Data1->Superposition(Data2));
                Sup->Printifo();
                break;
            }
            case 8: {
                Polynom<Complex>* Sup = new Polynom<Complex>(*Data2->Superposition(Data1));
                Sup->Printifo();
                break;
            }
            case 9: {
                Data1->Printifo();
                Data2->Printifo();
            }
            case 10: {
                break;
            }

            default:
                break;
            }
            cout << "\n";
        }

    };

}
void Main_menu() {
    int us = -1;
    while (us != 0) {
        cout << "Do you want to generate coefs of your polynom, or write?\n1.Generate\n2.Write\nPress 0 to escape\n";
        cin >> us;
        if (us == 2) Menu();
        if (us == 1) Randomvalues();
    }

}
void Main_menu_Lin() {
    int us = -1;
    while (us != 0) {
        cout << "Do you want to generate coefs of your forms, or write?\n1.Generate\n2.Write\nPress 0 to escape\n";
        cin >> us;
        if (us == 2) Menu_Lin();
        if (us == 1) Randomvalues_Lin();
    }

}
void Menu_Lin() {
    cout << "Enter type, that you want:\n1.Int\n2.Double\n3.Complex\n";
    int usrch;
    cin >> usrch;
    cout << "\n";
    if (usrch == 1) {
        cout << "Enter two Liniar forms:\n";
        cout << "Enter length of first form: \n";
        int l1;
        cin >> l1;
        cout << "Enter coefs of your form from x^0: \n";
        int* data1 = new int[l1];
        for (int i = 0; i < l1; i++)
            cin >> data1[i];
        LiniarForm<int>* Data1 = new LiniarForm<int>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        int* data2 = new int[l2];
        for (int i = 0; i < l2; i++)
            cin >> data2[i];
        LiniarForm<int>* Data2 = new LiniarForm<int>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printinfo();
        Data2->Printinfo();
        cout << "\nwhat do you want:\n1.Sum\n2.Min\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Print information\n8.Quiet\n";
        int usch = 0;
        while (usch != 8) {
            cin >> usch;
            switch (usch)
            {
            case 1: {
                cout << "\nSum of first and second forms\n";
                LiniarForm<int>* Sum = new LiniarForm<int>(*Data1);
                Sum->Sum(*Data2);
                Sum->Printinfo();
                break;
            }
            case 2: {
                cout << "\nMinus first - second forms\n";
                LiniarForm<int>* Min = new LiniarForm<int>(*Data1);
                Min->Min(*Data2);
                Min->Printinfo();
                cout << "\nMinus second - first forms\n";

                LiniarForm<int>* Min2 = new LiniarForm<int>(*Data2);
                Min2->Min(*Data1);
                Min2->Printinfo();
                break;
            }
            case 3: {
                cout << "\nEnter your value\n";
                int x;
                cin >> x;
                Data1->Mult(x);
                Data1->Printinfo();
                break;
            }
            case 4: {
                cout << "\nEnter your value\n";
                int x;
                cin >> x;
                Data2->Mult(x);
                Data2->Printinfo();
                break;
            }
            case 5: {
                cout << "\nEnter values\n";
                ArraySequence<int>* data = new ArraySequence<int>;
                for (int i = 0; i < Data1->GetSize(); i++) {
                    int x;
                    cin >> x;
                    data->Append(x);
                }
                
                int da = Data1->value(data);
                cout << "\n" << da << "\n";
                break;
            }
            case 6: {
                cout << "\nEnter values\n";
                ArraySequence<int>* data = new ArraySequence<int>;
                for (int i = 0; i < Data2->GetSize(); i++) {
                    int x;
                    cin >> x;
                    data->Append(x);
                }
                int da = Data2->value(data);
                cout << "\n" << da << "\n";
                break;
            }
            case 7: {
                Data1->Printinfo();
                Data2->Printinfo();
                break;
            }
            case 8: {break; }
            default:
                break;
            }
        }
    }
    if (usrch == 2) {
        cout << "Enter two Liniar forms:\n";
        cout << "Enter length of first form: \n";
        int l1;
        cin >> l1;
        cout << "Enter coefs of your form from x^0: \n";
        double* data1 = new double[l1];
        for (int i = 0; i < l1; i++)
            cin >> data1[i];
        LiniarForm<double>* Data1 = new LiniarForm<double>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        double* data2 = new double[l2];
        for (int i = 0; i < l2; i++)
            cin >> data2[i];
        LiniarForm<double>* Data2 = new LiniarForm<double>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printinfo();
        Data2->Printinfo();
        cout << "\nwhat do you want:\n1.Sum\n2.Min\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Print information\n8.Quiet\n";
        int usch = 0;

        while (usch != 8) {
            cin >> usch;
            switch (usch)
            {
            case 1: {
                cout << "\nSum of first and second forms\n";
                LiniarForm<double>* Sum = new LiniarForm<double>(*Data1);
                Sum->Sum(*Data2);
                Sum->Printinfo();
                break;
            }
            case 2: {
                cout << "\nMinus first - second forms\n";
                LiniarForm<double>* Min = new LiniarForm<double>(*Data1);
                Min->Min(*Data2);
                Min->Printinfo();
                cout << "\nMinus second - first forms\n";
                LiniarForm<double>* Min1 = new LiniarForm<double>(*Data2);
                Min1->Min(*Data1);
                Min1->Printinfo();
                break;
            }
            case 3: {
                cout << "\nEnter your value\n";
                double x;
                cin >> x;
                Data1->Mult(x);
                Data1->Printinfo();
                break;
            }
            case 4: {
                cout << "\nEnter your value\n";
                double x;
                cin >> x;
                Data2->Mult(x);
                Data2->Printinfo();
                break;
            }
            case 5: {
                cout << "\nEnter values\n";
                ArraySequence<double>* data = new ArraySequence<double>;
                for (int i = 0; i < Data1->GetSize(); i++) {
                    double x;
                    cin >> x;
                    data->Append(x);
                }
                double da = Data1->value(data);
                cout << "\n" << da << "\n";
                break;
            }
            case 6: {
                cout << "\nEnter values\n";
                ArraySequence<double>* data = new ArraySequence<double>;
                for (int i = 0; i < Data2->GetSize(); i++) {
                    double x;
                    cin >> x;
                    data->Append(x);
                }
                double da = Data2->value(data);
                cout << "\n" << da << "\n";
                break;
            }
            case 7: {
                Data1->Printinfo();
                Data2->Printinfo();
                break;
            }
            case 8: {break; }
            default:
                break;
            }
        }
    }
    if (usrch == 3) {
        cout << "Enter two Liniar forms:\n";
        cout << "Enter length of first form: \n";
        int l1;
        cin >> l1;
        cout << "Enter coefs of your form from x^0: \n";
        Complex* data1 = new Complex[l1];
        for (int i = 0; i < l1; i++)
            cin >> data1[i];
        LiniarForm<Complex>* Data1 = new LiniarForm<Complex>(data1, l1);
        cout << "Enter length of second polynom: \n";
        int l2;
        cin >> l2;
        cout << "Enter coefs of your polynom from x^0: \n";
        Complex* data2 = new Complex[l2];
        for (int i = 0; i < l2; i++)
            cin >> data2[i];
        LiniarForm<Complex>* Data2 = new LiniarForm<Complex>(data2, l2);
        cout << "Your two Polynoms\n";
        Data1->Printinfo();
        Data2->Printinfo();
        cout << "\nwhat do you want:\n1.Sum\n2.Min\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Print information\n8.Quiet\n";
        int usch = 0;

        while (usch != 8) {
            cin >> usch;
            switch (usch)
            {
            case 1: {
                cout << "\nSum of first and second forms\n";
                LiniarForm<Complex>* Sum = new LiniarForm<Complex>(*Data1);
                Sum->Sum(*Data2);
                Sum->Printinfo();
                break;
            }
            case 2: {
                cout << "\nMinus first - second forms\n";
                LiniarForm<Complex>* Min = new LiniarForm<Complex>(*Data1);
                Min->Min(*Data2);
                Min->Printinfo();
                cout << "\nMinus second - first forms\n";
                LiniarForm<Complex>* Min1 = new LiniarForm<Complex>(*Data2);
                Min1->Min(*Data1);
                Min1->Printinfo();
                break;
            }
            case 3: {
                cout << "\nEnter your value\n";
                Complex x;
                cin >> x;
                Data1->Mult(x);
                Data1->Printinfo();
                break;
            }
            case 4: {
                cout << "\nEnter your value\n";
                Complex x;
                cin >> x;
                Data2->Mult(x);
                Data2->Printinfo();
                break;
            }
            case 5: {
                cout << "\nEnter values\n";
                ArraySequence<Complex>* data = new ArraySequence<Complex>;
                for (int i = 0; i < Data1->GetSize(); i++) {
                    Complex x;
                    cin >> x;
                    data->Append(x);
                }
                Complex da = Data1->value(data);
                cout << "\n" << da << "\n";
                break;
            }
            case 6: {
                cout << "\nEnter values\n";
                ArraySequence<Complex>* data = new ArraySequence<Complex>;
                for (int i = 0; i < Data2->GetSize(); i++) {
                    Complex x;
                    cin >> x;
                    data->Append(x);
                }
                Complex da = Data2->value(data);
                cout << "\n" << da << "\n";
                break;
            }
            case 7: {
                Data1->Printinfo();
                Data2->Printinfo();
                break;
            }
            case 8: {break; }
            default:
                break;
            }
        }
    };
}
void Randomvalues_Lin() {
    {
        cout << "Enter type, that you want:\n1.Int\n2.Double\n3.Complex\n";
        int usrch;
        cin >> usrch;
        cout << "\n";
        if (usrch == 1) {
            cout << "Enter two Liniar forms:\n";
            cout << "Enter length of first form: \n";
            int l1;
            cin >> l1;
            cout << "Enter coefs of your first from x^0: \n";
            int* data1 = new int[l1];
            for (int i = 0; i < l1; i++)
                data1[i] = rand() % 1000;
            LiniarForm<int>* Data1 = new LiniarForm<int>(data1, l1);
            cout << "Enter length of second form: \n";
            int l2;
            cin >> l2;
            cout << "Enter coefs of your second from x^0: \n";
            int* data2 = new int[l2];
            for (int i = 0; i < l2; i++)
                data2[i] = rand() % 1000;
            LiniarForm<int>* Data2 = new LiniarForm<int>(data2, l2);
            cout << "Your two Polynoms\n";
            Data1->Printinfo();
            Data2->Printinfo();
            cout << "\nwhat do you want:\n1.Sum\n2.Min\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Print information\n8.Quiet\n";
            int usch = 0;
            while (usch != 8) {
                cin >> usch;
                switch (usch)
                {
                case 1: {
                    cout << "\nSum of first and second forms\n";
                    LiniarForm<int>* Sum = new LiniarForm<int>(*Data1);
                    Sum->Sum(*Data2);
                    Sum->Printinfo();
                    break;
                }
                case 2: {
                    cout << "\nMinus first - second forms\n";
                    LiniarForm<int>* Min = new LiniarForm<int>(*Data1);
                    Min->Min(*Data2);
                    Min->Printinfo();
                    cout << "\nMinus second - first forms\n";

                    LiniarForm<int>* Min2 = new LiniarForm<int>(*Data2);
                    Min2->Min(*Data1);
                    Min2->Printinfo();
                    break;
                }
                case 3: {
                    cout << "\nEnter your value\n";
                    int x;
                    cin >> x;
                    Data1->Mult(x);
                    Data1->Printinfo();
                    break;
                }
                case 4: {
                    cout << "\nEnter your value\n";
                    int x;
                    cin >> x;
                    Data2->Mult(x);
                    Data2->Printinfo();
                    break;
                }
                case 5: {
                    cout << "\nEnter values\n";
                    ArraySequence<int>* data = new ArraySequence<int>;
                    for (int i = 0; i < Data1->GetSize(); i++) {
                        int x;
                        cin >> x;
                        data->Append(x);
                    }

                    int da = Data1->value(data);
                    cout << "\n" << da << "\n";
                    break;
                }
                case 6: {
                    cout << "\nEnter values\n";
                    ArraySequence<int>* data = new ArraySequence<int>;
                    for (int i = 0; i < Data2->GetSize(); i++) {
                        int x;
                        cin >> x;
                        data->Append(x);
                    }
                    int da = Data2->value(data);
                    cout << "\n" << da << "\n";
                    break;
                }
                case 7: {
                    Data1->Printinfo();
                    Data2->Printinfo();
                    break;
                }
                case 8: {break; }
                default:
                    break;
                }
            }
        }
        if (usrch == 2) {
            cout << "Enter two Liniar forms:\n";
            cout << "Enter length of first form: \n";
            int l1;
            cin >> l1;
            cout << "Enter coefs of your first from x^0: \n";
            double* data1 = new double[l1];
            for (int i = 0; i < l1; i++)
                cin >> data1[i];
            LiniarForm<double>* Data1 = new LiniarForm<double>(data1, l1);
            cout << "Enter length of second form: \n";
            int l2;
            cin >> l2;
            cout << "Enter coefs of your coefs from x^0: \n";
            double* data2 = new double[l2];
            for (int i = 0; i < l2; i++)
                data1[i] = (rand() % 1000000 + 0.1 * (rand() % 9 + 0.0)) / 1000;
            LiniarForm<double>* Data2 = new LiniarForm<double>(data2, l2);
            cout << "Your two forms\n";
            Data1->Printinfo();
            Data2->Printinfo();
            cout << "\nwhat do you want:\n1.Sum\n2.Min\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Print information\n8.Quiet\n";
            int usch = 0;

            while (usch != 8) {
                cin >> usch;
                switch (usch)
                {
                case 1: {
                    cout << "\nSum of first and second forms\n";
                    LiniarForm<double>* Sum = new LiniarForm<double>(*Data1);
                    Sum->Sum(*Data2);
                    Sum->Printinfo();
                    break;
                }
                case 2: {
                    cout << "\nMinus first - second forms\n";
                    LiniarForm<double>* Min = new LiniarForm<double>(*Data1);
                    Min->Min(*Data2);
                    Min->Printinfo();
                    cout << "\nMinus second - first forms\n";
                    LiniarForm<double>* Min1 = new LiniarForm<double>(*Data2);
                    Min1->Min(*Data1);
                    Min1->Printinfo();
                    break;
                }
                case 3: {
                    cout << "\nEnter your value\n";
                    double x;
                    cin >> x;
                    Data1->Mult(x);
                    Data1->Printinfo();
                    break;
                }
                case 4: {
                    cout << "\nEnter your value\n";
                    double x;
                    cin >> x;
                    Data2->Mult(x);
                    Data2->Printinfo();
                    break;
                }
                case 5: {
                    cout << "\nEnter values\n";
                    ArraySequence<double>* data = new ArraySequence<double>;
                    for (int i = 0; i < Data1->GetSize(); i++) {
                        double x;
                        cin >> x;
                        data->Append(x);
                    }
                    double da = Data1->value(data);
                    cout << "\n" << da << "\n";
                    break;
                }
                case 6: {
                    cout << "\nEnter values\n";
                    ArraySequence<double>* data = new ArraySequence<double>;
                    for (int i = 0; i < Data2->GetSize(); i++) {
                        double x;
                        cin >> x;
                        data->Append(x);
                    }
                    double da = Data2->value(data);
                    cout << "\n" << da << "\n";
                    break;
                }
                case 7: {
                    Data1->Printinfo();
                    Data2->Printinfo();
                    break;
                }
                case 8: {break; }
                default:
                    break;
                }
            }
        }
        if (usrch == 3) {
            cout << "Enter two Liniar forms:\n";
            cout << "Enter length of first form: \n";
            int l1;
            cin >> l1;
            cout << "Enter coefs of your first from x^0: \n";
            Complex* data1 = new Complex[l1];
            for (int i = 0; i < l1; i++) {
                data1[i].R = (rand() % 1000000 + 0.0) / 1000;
                data1[i].I = (rand() % 1000000 + 0.0) / 1000;
            }
            LiniarForm<Complex>* Data1 = new LiniarForm<Complex>(data1, l1);
            cout << "Enter length of second form: \n";
            int l2;
            cin >> l2;
            cout << "Enter coefs of your second from x^0: \n";
            Complex* data2 = new Complex[l2];
            for (int i = 0; i < l2; i++) {
                data2[i].R = (rand() % 1000000 + 0.0) / 1000;
                data2[i].I = (rand() % 1000000 + 0.0) / 1000;
            }
            LiniarForm<Complex>* Data2 = new LiniarForm<Complex>(data2, l2);
            cout << "Your two forms\n";
            Data1->Printinfo();
            Data2->Printinfo();
            cout << "\nwhat do you want:\n1.Sum\n2.Min\n3.First by value\n4.Second by value\n5.Get value for first\n6.Get value for second\n7.Print information\n8.Quiet\n";
            int usch = 0;

            while (usch != 8) {
                cin >> usch;
                switch (usch)
                {
                case 1: {
                    cout << "\nSum of first and second forms\n";
                    LiniarForm<Complex>* Sum = new LiniarForm<Complex>(*Data1);
                    Sum->Sum(*Data2);
                    Sum->Printinfo();
                    break;
                }
                case 2: {
                    cout << "\nMinus first - second forms\n";
                    LiniarForm<Complex>* Min = new LiniarForm<Complex>(*Data1);
                    Min->Min(*Data2);
                    Min->Printinfo();
                    cout << "\nMinus second - first forms\n";
                    LiniarForm<Complex>* Min1 = new LiniarForm<Complex>(*Data2);
                    Min1->Min(*Data1);
                    Min1->Printinfo();
                    break;
                }
                case 3: {
                    cout << "\nEnter your value\n";
                    Complex x;
                    cin >> x;
                    Data1->Mult(x);
                    Data1->Printinfo();
                    break;
                }
                case 4: {
                    cout << "\nEnter your value\n";
                    Complex x;
                    cin >> x;
                    Data2->Mult(x);
                    Data2->Printinfo();
                    break;
                }
                case 5: {
                    cout << "\nEnter values\n";
                    ArraySequence<Complex>* data = new ArraySequence<Complex>;
                    for (int i = 0; i < Data1->GetSize(); i++) {
                        Complex x;
                        cin >> x;
                        data->Append(x);
                    }
                    Complex da = Data1->value(data);
                    cout << "\n" << da << "\n";
                    break;
                }
                case 6: {
                    cout << "\nEnter values\n";
                    ArraySequence<Complex>* data = new ArraySequence<Complex>;
                    for (int i = 0; i < Data2->GetSize(); i++) {
                        Complex x;
                        cin >> x;
                        data->Append(x);
                    }
                    Complex da = Data2->value(data);
                    cout << "\n" << da << "\n";
                    break;
                }
                case 7: {
                    Data1->Printinfo();
                    Data2->Printinfo();
                    break;
                }
                case 8: {break; }
                default:
                    break;
                }
            }
        };
    }
}
void Grand_Menu() {
    
    int x = -1;
    while (x != 3) {
        cout << "What do you want to use?\n1.Polynom\n2.Liniar Form\n3.Exit\n";
        cin >> x;
        if (x == 1) Main_menu();
        if (x == 2) Main_menu_Lin();
    }
};
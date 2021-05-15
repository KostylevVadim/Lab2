#include "../Lab02/Menu.h"
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("Data.txt");
    fout << "Writeinfo\n";
    fout << "Append\n";
    fout << "DynamicArray\n";
    cout << 0;
    

    
    cout << 1;
    fout << "\nDynamicArraySeq\n";
    for (int i = 1; i < 15; i++) {
        int start = clock();
        ArraySequence<int>* D1 = new ArraySequence<int>;
        for (int j = 0; j < pow(2, i); j++) {
            D1->Append(1);
        }

        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    
    cout << 2;
    fout << "\nLinkedListSeq\n";
    for (int i = 1; i < 15; i++) {
        int start = clock();
        ListSequence<int>* D1 = new ListSequence<int>;
        for (int j = 0; j < pow(2, i); j++) {
            D1->Append(1);
        }
        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    cout << 3;
    fout << "\nPrepend\n";
    fout << "\nDynamicArraySeq\n";
    for (int i = 1; i < 15; i++) {
        int start = clock();
        ArraySequence<int>* D1 = new ArraySequence<int>;
        for (int j = 0; j < pow(2, i); j++) {
            D1->Prepend(1);
        }

        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    cout << 4;
    fout << "\nLinkedListSeq\n";
    for (int i = 1; i < 15; i++) {
        int start = clock();
        ListSequence<int>* D1 = new ListSequence<int>;
        for (int j = 0; j < pow(2, i); j++) {
            D1->Prepend(1);
        }
        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    fout << "\nSet\n";
    fout << "\nDynamicArraySeq\n";
    for (int i = 1; i < 15; i++) {

        ArraySequence<int>* D1 = new ArraySequence<int>(pow(2, i));
        int start = clock();
        for (int j = 0; j < pow(2, i); j++) {
            D1->Set(i,1);
        }

        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    cout << 5;
    fout << "\nListSeq\n";
    for (int i = 1; i < 15; i++) {
        ListSequence<int>* D1 = new ListSequence<int>(pow(2, i));
        int start = clock();
        
        for (int j = 0; j < pow(2, i); j++) {
            D1->Set(i, 1);
        }

        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    cout << 6;
    fout << "\nResize\n";
    fout << "\nDynamicArraySeq\n";
    for (int i = 1; i < 15; i++) {

        ArraySequence<int>* D1 = new ArraySequence<int>(pow(2, i));
        int start = clock();
        for (int j = 1; j < pow(2, i); j++) {
            //cout << "NS" << j<<"\n";
            D1->Resize(j);
        }

        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    cout << 7;
    fout << "\nListSeq\n";
    for (int i = 1; i < 15; i++) {
        ListSequence<int>* D1 = new ListSequence<int>(pow(2, i));
        int start = clock();

        for (int j = 1; j < pow(2, i); j++) {
            D1->Resize(j);
            //cout << "NS" << j << "\n";
        }

        int end = clock();
        int x = end - start;
        fout << x << "->" << pow(2, i) << "\n";
    }
    cout << 8;
    cout << "Finish!\n";
}

// gr2_PP_lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void funkcja1(int a, int b) {
    if (a > b) {
        cout << "Liczba " << a << " jest wieksza" << endl;
    }
    else {
        cout << "Liczba " << b << " jest wieksza" << endl;
    }
}

int funkcja2(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    int x, y;
    cout << "Wprowadz liczbe a: ";
    cin >> x;
    cout << "Wprowadz liczbe b: ";
    cin >> y;

    funkcja1(x, y);
    cout << "Wieksza liczba to: " << funkcja2(x, y) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

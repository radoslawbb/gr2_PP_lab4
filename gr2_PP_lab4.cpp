// gr2_PP_lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;


/*zadanie 1
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
}*/

/*zadanie 2
void dzielniki(int n) {
    cout << "Dzielniki liczby " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}*/


/*zadanie 3
float dodaj(float x, float y) {
    return x + y;
}

float odejmij(float x, float y) {
    return x - y;
}

float mnoz(float x, float y) {
    return x * y;
}

float dziel(float x, float y) {
    if (x != 0 && y != 0) {
        cout << x << " / " << y << " = " << x/y << endl;
        return x / y;
    }
    else {
        cout << "nie mozna dzielic przez 0" << endl;
    }
}*/

/*zadanie 4
int potega(int  a, int b) {
    int wyn;
    wyn = 1;
    for (int i = 0; i < b; i++) {
         wyn *= a;
    }
    return wyn;
}*/

/*zadanie 5
int silnia(int n) {
    int wyn = 1;
    for (int i = 1; i <= n; i++) {
        wyn *= i;
    }
    return wyn;
}*/

/*zadanie 6.1
int dwaDoN(int n) {
    if (n < 0) {
        cout << "To nie jest liczba naturalna" << endl;
    }
    else {
        int wyn = 1;
        for (int i = 1; i <= n; i++) {
            wyn *= 2;
        }
        return wyn;
    }
}*/

/*zadanie 7
void szczesliwyNumerek(int numerek) {
    float licz = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        int los = rand() % 10 + 1;
        cout << los << endl;
        if (los == numerek) {
            licz++;
        }
    }
    float proc = (licz / 10) * 100;

    cout << "Szczesliwy numerek wystapil " << licz << " razy. Stanowi to " << proc << "% wszystkich wylosowanych liczb" << endl;
}*/


int parzysta(int n) {
    int wyn = n / 2;
    return wyn;
}

int nieParzysta(int n) {
    int wyn = (n - 1) / 2;
    return wyn;
}

void stoLiczb() {
    for (int i = 0; i <= 100; i++) {
        cout << i << endl;
        if (i % 2 == 0) {
            cout << "n/2 = " << parzysta(i) << endl;;
        }
        else {
            cout << "(n-1)/2 = " << nieParzysta(i) << endl;
        }
    }
}

int main()
{
    /*zadanie 1
    int x, y;
    cout << "Wprowadz liczbe a: ";
    cin >> x;
    cout << "Wprowadz liczbe b: ";
    cin >> y;

    funkcja1(x, y);
    cout << "Wieksza liczba to: " << funkcja2(x, y) << endl;*/

    /*zadanie 2
    int x;
    do {
        cout << "Wprowadz liczbe calkowita dodatnia: ";
        cin >> x;
    } while (x < 1);
    
    if (x >= 1) {
        dzielniki(x);
    }*/


    /*zadanie 3
    int koniec = 1;
    while (koniec) {
        float x, y, wyn;
        char znak;
        cout << "\nPodaj liczbe x: ";
        cin >> x;
        cout << "\nPodaj liczbe y: ";
        cin >> y;

        cout << "\nPodaj znak dla pozadanego dzialania: ";
        cin >> znak;

        cout << endl;

        switch (znak) {
        case '+':
            cout << x << " + " << y << " = " << dodaj(x,y) << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << odejmij(x,y) << endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << mnoz(x,y) << endl;
            break;
        case '/':
            dziel(x, y);
            break;
        default:
            cout << "Wprowadzono niepoprawny znak" << endl;
            break;
        }

        cout << "Zakonczyc program? Wpisz 0 zeby zakonczyc: ";
        cin >> koniec;

        if (koniec == 0) {
            return 0;
        }
    }*/

    /*zadanie 4
    int x, y;
    cout << "Wprowadz a: ";
    cin >> x;
    cout << "Wprowadz b: ";
    cin >> y;

    cout << potega(x, y);*/


    /*zadanie 5
    int x;
    do {
        cout << "Wprowadz n: ";
        cin >> x;
    } while (x < 0);
    
    if (x >= 0) {
        cout << x << "! = " << silnia(x) << endl;
    }*/


    /*zadanie 6.1
    int liczba;

    cout << "Podaj liczbe naturalna: ";
    cin >> liczba;
    cout << "2^n = " << dwaDoN(liczba) << endl;*/

    /*zadanie 6.2
    int liczba;

    cout << "Podaj liczbe naturalna: ";
    cin >> liczba;
    cout << "2^n = " << pow(2,liczba) << endl;*/

    /*zadanie 7
    int num;
    cout << "Podaj szczesliwy numerek: ";
    cin >> num;
    szczesliwyNumerek(num);*/

    stoLiczb();
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

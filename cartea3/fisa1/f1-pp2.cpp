#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a, b;
    float ec;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << endl;

    if (a==0 || b==0) {
        cout << "!Numerele trebuie sa fie diferite de valoarea 0" << endl;
    } else {
        ec = sqrt((pow(a,2)/b)-(pow(b,2)/a));

        cout << "Valoarea expresiei este: " << ec << endl;
    }
}

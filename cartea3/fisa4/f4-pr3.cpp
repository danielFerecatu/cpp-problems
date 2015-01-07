#include <iostream>
using namespace std;

int main() {

    unsigned int a, b, c;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    cout << endl;

    if (a!=0 && b!=0 && c!=0) {
        if (a%c==0 && b%c==0) {
            cout << "fractia se simplifica cu " << c << endl;
            a = a/c;
            b = b/c;
            cout << a << "/" << b << endl;
        }
        else {
            cout << "fraci nu se simplifica cu " << c << endl;
        }
    }
    else {
        cout << "numerele trebuie sa fie diferite de 0" << endl;
    }



}

#include <iostream>
using namespace std;

int main() {

    int x, y, a, b, c;

    cout << "x="; cin >> x;
    cout << endl;

    if (x>=100 && x <= 999) {

        c = x%10;
        b = (x/10)%10;
        a = x/100;

        y = c*100+b*10+a;

            if (x==y) {
                cout << "numarul este palindrom" << endl;
            }
            else {
                cout << "nu este palindrom" << endl;
            }

    }
    else {
        cout << "numarul trebuie sa aiba 3 cifre" << endl;
    }


}

#include <iostream>
using namespace std;

int main() {

    int a, b, maxim;
    int a1, a2, b1, b2;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << endl;

    if (a>10 && a<99 && b>10 && b<99) {

        a2 = a % 10;
        a1 = (a/10) % 10;

        b2 = b % 10;
        b1 = (b/10) %10;

        maxim = max(min(a1,a2),min(b1,b2));

        cout << "rezultatul este: " << maxim << endl;

    }
    else {
        cout << "numerele trebuie sa aiba 2 cifre" << endl;
    }


}

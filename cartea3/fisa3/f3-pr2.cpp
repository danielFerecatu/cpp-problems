#include <iostream>
using namespace std;

int main() {

int n, a, b, s;

cout << "n="; cin >> n;

    if (n>=10 && n<=99) {

        a = n%10;
        b = n/10;
        s = a+b;

        if (n%s==0) cout << "da" << endl;
            else cout << "nu" << endl;
    }
    else {
        cout << "numarul trebuie sa aiba 2 cifre" << endl;
    }
}

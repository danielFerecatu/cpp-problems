#include <iostream>;
using namespace std;

int main() {

    int n, a, b, c, d;

    cout << "n="; cin >> n;
    cout << endl;

    if (1000<=n && n<=9999) {

        d = n % 10;
        c = (n/10) % 10;
        b = (n/100) % 10;
        a = n/1000;

        cout << a << " " << b << " " << c << " " << d << endl;
    } else {
        cout << "valoarea trebuie sa fie cuprinsa intre 1000 si 9999" << endl;
    }

}

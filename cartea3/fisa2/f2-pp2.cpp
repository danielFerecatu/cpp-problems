#include <iostream>
using namespace std;

int main() {

    int n, s;

    cout << "n="; cin >> n;
    cout << endl;

    if (n==0) {
        cout << "n trebuie sa fie diferit de 0";
    }
    else {
        s = (n*(n+1))/2;
        cout << "suma este: " << s << endl;
    }

}

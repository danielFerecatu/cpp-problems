#include <iostream>
using namespace std;

int main() {

unsigned int n, a, b, c, d, e;

cout << "n="; cin >> n;
cout << endl;

if (n>10000 && n<=99999) {

e = n%10;
d = (n/10)%10;
c = (n/100)%10;
b = (n/1000)%10;
a = n/10000;

if (a<b && b<c && c<d && d<e) {
    cout << "numerele sunt in ordine crescatoare" << endl;
}

else {
    cout << "numerele nu sunt in ordine crescatoare" << endl;
}


}
else {
    cout << "numarul trebuie sa aiba 5 cifre" << endl;
}


}

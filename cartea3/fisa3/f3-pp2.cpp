#include <math.h>
#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    cout << endl;

    if (pow(a,2)==pow(b,2)+pow(c,3) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(b,2)) {
        cout << "numerele sunt pitagorice" << endl;
    }
    else {
        cout << "numerele nu sunt pitagorice" << endl;
    }

}

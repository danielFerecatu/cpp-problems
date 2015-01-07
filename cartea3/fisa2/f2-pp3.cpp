#include <math.h>
#include <iostream>
using namespace std;

int main() {

float a, b, c;

cout << "a="; cin >> a;
cout << "b="; cin >> b;
cout << "c="; cin >> c;
cout << endl;

if (a>0 && b>0 && c>0 && a<b+c && b<a+c && c<a+b) {
    cout << "pot reprezenta laturile unui triunghi" << endl;;

    if (a==b & b==c) {
        cout << "triunghiul este echilateral" << endl;
    }

    else if (a==b || b==c || c==a) {
        cout << "triunghiul este isoscel" << endl;
    }

    else if (pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(b,2)) {
        cout << "triunghiul este dreptunghic" << endl;
    }
    else {
        cout << "triunghiul este oarecare" << endl;
    }
}
else {
    cout << "numerele nu pot fi laturile unui triunghi" << endl;
}

}

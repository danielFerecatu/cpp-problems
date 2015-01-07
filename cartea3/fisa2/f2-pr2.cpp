#include <math.h>
#include <iostream>
using namespace std;

int main() {

float a, b, c;

cout << "a="; cin >> a;
cout << "b="; cin >> b;
cout << "c="; cin >> c;
cout << endl;

if (a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b) {
    cout << "pot reprezenta laturile unui triunghi" << endl;

    if (a==b && b==c) {
        cout << "este triunghi echilateral" << endl;
    }
    else {
        cout << "nu este triunghi echilateral" << endl;
    }

    if (pow(a,2)==pow(b,2)+pow(c,2)) {
        cout << "este triunghi dreptunghic cu ipotenuza a" << endl;
    }

    else if (pow(b,2)==pow(a,2)+pow(c,2)) {
        cout << "este triunghi dreptunghic cu ipotenuza b" << endl;
    }

    else if (pow(c,2)==pow(a,2)+pow(b,2)) {
        cout << "este triunghi dreptunghic cu ipotenuza c" << endl;
    }
}
else {
    cout << "nu pot fi laturile unui triunghi" << endl;
}


}

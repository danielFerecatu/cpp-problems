#include <math.h>
#include <iostream>
using namespace std;

int main() {

float f, x;

cout << "x="; cin >> x;
cout << endl;

if (x <= 0) {
    f = pow(x,2)-2*x+7;
}
else {
    f = sqrt(pow(x,3)-2*x)+pow(x,2);
}

cout << "f=" << f << endl;


}

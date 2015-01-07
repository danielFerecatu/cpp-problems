#include <math.h>
#include <iostream>
using namespace std;

int main() {

    int x;
    float f;

    cout << "x="; cin >> x;
    cout << endl;

    if (x <= -3) {
        f = (1/(2*x)+7)+3*x;
    }
    else if (x < -3 && x > 5) {
        f = 3*pow(x,2)+5*x+1;
    }
    else if (x <= 5) {
        f = sqrt(2*pow(x,3)-5*x)+2;
    }

    cout << "rezultatul este: " << f << endl;

}

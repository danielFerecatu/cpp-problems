#include <iostream>
using namespace std;

int main() {

    int x, y, z, minim;

    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    cout << "z="; cin >> z;
    cout << endl;

    if (x<y && x<z) {
        minim = x;
    }
    else if (y<x && y<z) {
        minim = y;
    }
    else {
        minim = z;
    }

    cout << "minimul este: " << minim << endl;

}

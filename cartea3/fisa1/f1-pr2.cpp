#include <iostream>
using namespace std;

int main() {

    int x,y,aux;

    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    cout << endl;

    x = x+y;
    y = x-y;
    x = x-y;

    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

}

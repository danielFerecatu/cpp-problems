#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int x, y, prod;
    float mg;

    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    cout << endl;

    prod = x*y;
    mg = sqrt(x*y);

    cout << "Produsul este: " << prod << endl << "Media geometrica este: " << mg << endl;

return 0;

}

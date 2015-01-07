#include <iostream>
using namespace std;

int main() {

unsigned int x, y, x1, x2, x3, y1, y2, y3, sx, sy;

cout << "x="; cin >> x;
cout << "y="; cin >> y;
cout << endl;

if (x>=100 && x<=999 && y>=100 && y<=999) {

    x3 = x%10;
    x2 = (x/10)%10;
    x1 = x/100;

    sx = x1+x2+x3;

    y3 = y%10;
    y2 = (y/10)%10;
    y1 = y/100;

    sy = y1+y2+y3;

    cout << "rezultatul este: " << min(sx,sy) << endl;


}
else {
    cout << "numerele trebuie sa aiba 3 cifre" << endl;
}



}

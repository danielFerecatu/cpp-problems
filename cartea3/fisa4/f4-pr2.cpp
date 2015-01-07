#include <iostream>
using namespace std;

int main() {

float x, y;
char o;

cout << "x="; cin >> x;
cout << "y="; cin >> y;
cout << endl;

cout << "o="; cin >> o;
cout << endl;

if (y!=0) {
    if (o == '+') {
        cout << "x" << o << "y=" << x+y << endl;
    }
    else if (o == '-') {
        cout << "x" << o << "y=" << x-y << endl;
    }
    else if (o == '*') {
        cout << "x" << o << "y=" << x*y << endl;
    }
    else if (o == '/') {
        cout << "x" << o << "y=" << x/y << endl;
    }
    else {
        cout << "nu stiu ce sa calculez" << endl;
    }
}
else {
    cout << "y trebuie sa fie diferit de 0" << endl;
}



}

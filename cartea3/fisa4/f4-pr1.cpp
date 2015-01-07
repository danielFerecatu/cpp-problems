#include <iostream>
using namespace std;

int main() {

    unsigned int x, i;
    bool ok;

    cout << "x="; cin >> x;
    cout << endl;

    ok=0;

    for (int i=1; x/3;) {
        if (x==i*i*i) {
            ok=1;
        }
    }

    if (ok==0) {
        cout << "nu este cub perfect" << endl;
    }

    else {
        cout << "este cub perfect" << endl;
    }


}

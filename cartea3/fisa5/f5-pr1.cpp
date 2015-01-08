#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "n="; cin >> n;
    cout << endl;

    int s=0;

    for (int i=1; i<=n; i++ ) {
        s += i/(i+1);

        cout << "s=" << s << endl;
        cout << "i=" << i << endl;
        cout << endl;
    }

    // cout << s << endl;

}

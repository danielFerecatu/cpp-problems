#include <iostream>
using namespace std;

int number;


int main() {

do {
    cout << "number= ";
    cin >> number;
}

// - Show all odd numbers using a for loop
cout << "Odd:" << endl;

    for (int count = 1; count < number; count += 2) {
        cout << count << endl;
    }
    cout << endl;

cout << "===========" << endl << endl;




// - Show all odd numbers using a for loop
cout << "Backwards:" << endl;

    for (int count = number; count > -1; count--){
        cout << count << endl;
    }
    cout << endl;

cout << "===========" << endl << endl;




// - Count by fives using a for loop.
cout << "Fives:" << endl;

    for (int count = 0; count <= number; count += 5) {
        cout << count << endl;
    }
    cout << endl;

cout << "===========" << endl << endl;

return 0;

}

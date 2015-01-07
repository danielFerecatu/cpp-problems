#include <iostream>
using namespace std;

int main() {

int an;

cout << "an="; cin >> an;
cout << endl;

if ((an%4==0 && an%100!=0) || an%400==0) {
    cout << "an bisect" << endl;
}
else {
    cout << "nu este an bisect" << endl;
}


}

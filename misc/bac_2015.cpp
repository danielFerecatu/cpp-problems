#include <iostream>
using namespace std;

int s1_2_ab() {

    int c1, c2, m=0, p=1;
    unsigned int n;

    cout << "n= ";
    cin >> n;

    while ( n>=10 ) {

        c1 = n%10;
        c2 = n%10;
        n  = n/10;

        if ( c1!=c2 ) {

            if ( c1>c2 ) m = m+(c1-c2)*p;
            else m = m+(c2-c1)*p;

            p *= 10;
        }

        cout << endl << "m = " << m;
    }

}


int s1_2_cd() {

    int c1, c2, m=0, p=1;
    unsigned int n;

    cout << "n= ";
    cin >> n;

    do {
        c1 = n%10;
        c2 = n%10;
        n = n/10;

        if ( c1!=c2 ) {

            if ( c1>c2 ) m = m+(c1-c2)*p;
            else m = m+(c2-c1)*p;

            p *= 10;
        }

        cout << endl << "m = " << m;

    } while ( n>=10 );

}



int main() {

    s1_2_cd();

return 0;

}

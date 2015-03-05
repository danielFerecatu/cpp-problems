// (c) 2015 Daniel Ferecatu
// input number from 1 to 7 and return the day in words

#include <iostream>
using namespace std;

int main() {

int zi;

do {

    cout << "Introdu numarul zilei din saptamana: ";
    cin >> zi;

    if ( zi>7 ) {

        do {
            cout << "! numarul trebuie sa fie mai mic decat 7" << endl << endl;
            
            cout << "Mai incearca: ";
            cin >> zi;

            cout << endl;
        }
        while ( zi>7 );

        switch(zi) {
            case 1:
                cout << "Luni";
                break;
            case 2:
                cout << "Marti";
                break;
            case 3:
                cout << "Miercuri";
                break;
            case 4:
                cout << "Joi";
                break;
            case 5:
                cout << "Vineri";
                break;
            case 6:
                cout << "Sambata";
                break;
            case 7:
                cout << "Duminica";
                break;
            default:
                cout << "Nu cunosc ziua." << endl;
        }

        cout << endl;

    }
    else {

        cout << endl;

        switch(zi) {
            case 1:
                cout << "Luni";
                break;
            case 2:
                cout << "Marti";
                break;
            case 3:
                cout << "Miercuri";
                break;
            case 4:
                cout << "Joi";
                break;
            case 5:
                cout << "Vineri";
                break;
            case 6:
                cout << "Sambata";
                break;
            case 7:
                cout << "Duminica";
                break;
            default:
                cout << "Nu cunosc ziua." << endl;
        }

        cout << endl;

    }

}
while ( zi==0 );

return 0;
}

#include <math.h>
#include <iostream>
using namespace std;

int main() {

int x1, x2, y1, y2;
float dist;

cout << "x1="; cin >> x1;
cout << "x2="; cin >> x2;
cout << "y1="; cin >> y1;
cout << "y2="; cin >> y2;
cout << endl;

dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

cout << "Distanta este: " << dist << endl;


}

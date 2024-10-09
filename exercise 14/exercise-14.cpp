#include <iostream>

using namespace std;

int main(){
    float length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    double P = 2 * (length + width);
    double A = length * width;
    cout << "Rectangle perimeter: " << P << "\nRectangle area : " << A;
}


#include <iostream>

using namespace std;

int main(){
    int r;
    cout << "Enter Radius: ";
    cin >> r;
    float P = 2 * 3.14 * r;
    float A = 3.14 * r * r;
    cout << "circle perimeter: " << P << "\ncircle area : " << A;
}


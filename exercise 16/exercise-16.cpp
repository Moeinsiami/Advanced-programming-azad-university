#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    cout << "Enter third numbers: ";
    cin >> c;
    float y = double(a + b + c) / 3;
    cout << "Average: " << y;
    return 0;
}


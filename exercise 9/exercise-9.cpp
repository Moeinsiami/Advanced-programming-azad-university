#include <iostream>

using namespace std;

int main() {
    int x, m, k, r;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter m: ";
    cin >> m;

    cout << "Enter k: ";
    cin >> k;

    cout << "Enter r: ";
    cin >> r;

    double y = x + m * m - ((double)k / (r + 2));
    
    cout << "Result: " << y << endl;
    
    return 0;
}
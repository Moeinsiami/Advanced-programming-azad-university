#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    cout << "Result: " << max << endl;
    return 0;
}

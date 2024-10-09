#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: " << endl;
    cin >> a >> b >> c >> d;

    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    
    cout << "Result: " << max << endl;
    return 0;
}

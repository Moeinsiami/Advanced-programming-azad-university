#include <iostream>

using namespace std;

int main(){
    int y, b, x, a;
    cout << "Enter y : " << endl;
    cin >> y;
    cout << "Enter b : " << endl;
    cin >> b;
    cout << "Enter x : " << endl;
    cin >> x;
    cout << "Enter a : " << endl;
    cin >> a;
    double m = float(y-b) / (x-a);
    cout << "Result : " << m;
    return 0;
}

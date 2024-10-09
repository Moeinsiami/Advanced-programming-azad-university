#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    cout << "Enter c : " << endl;
    cin >> c;
    double m = a * -(b+c);
    cout << "Result : " << m;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int b , c;
    cout << "Enter b : " << endl;
    cin >> b;
    cout << "Enter c : " << endl;
    cin >> c;
    double m = pow(b , 2) - 4 * c;
    cout << "Result : " << m;
    return 0;
}

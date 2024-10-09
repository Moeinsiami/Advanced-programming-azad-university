#include <iostream>

using namespace std;

int main(){
    int y, m, p;
    cout << "Enter y: " << endl;
    cin >> y;
    cout << "Enter m: " << endl;
    cin >> m;
    cout << "Enter p: " << endl;
    cin >> p;
    double x = (float)(y*2) / (m+p);
    cout << "Result : " << x;
    return 0;
}




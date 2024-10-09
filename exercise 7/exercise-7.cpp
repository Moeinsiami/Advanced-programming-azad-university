#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Enter x: " << endl;
    cin >> x;
    double y = (float) 1/(x*x+x+3);
    cout << "Result : " << y;
    return 0;
}




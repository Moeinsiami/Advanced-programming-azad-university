#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = a++;
    cout << "b = " << b << "  a = " << a << endl;
    int c = 10;
    int d = ++c;
    cout << "d = " << d << "  c = " << c << endl;
    return 0;
}
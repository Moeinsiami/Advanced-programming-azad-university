#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and after that enter b: \n";
    cin >> a >> b;

    if (a > b)
    {
        cout << a;
    } else if (a < b) {
        cout << b;
    } else {
        cout << "equal";
    }
    
}
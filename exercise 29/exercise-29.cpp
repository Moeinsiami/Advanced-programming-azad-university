#include <iostream>
using namespace std;
void showNumbersInRange(int range);


int main()
{
    int n;
    showNumbersInRange(12);
    cout << "\n\n";
    showNumbersInRange(99);
    cout << "\n\n";
    showNumbersInRange(44);
    cout << "\n\n";   
    do
    {
        cout << "\nEnter a number: ";
        cin >> n;
        showNumbersInRange(n);
    } while (0 <=n);
        
}

void showNumbersInRange(int range)
{
    for ( int i = 1; i <= range; i++)
    {
        cout << i << " ";
    }
}
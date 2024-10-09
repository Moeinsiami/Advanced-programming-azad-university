#include <iostream>
using namespace std;
void sum(int x);


int main()
{
    int n;
    sum(12);
    cout << "\n\n";
    sum(99);
    cout << "\n\n";
    sum(44);
    cout << "\n\n";   
    do
    {
        cout << "\nEnter a number: ";
        cin >> n;
        sum(n);
    } while (0 <=n);
        
}

void sum(int x)
{
    int total = 0;
    for ( int i = 1; i <= x; i++)
    {
        total += i;
    }
    cout << "Sum: " << total;
}
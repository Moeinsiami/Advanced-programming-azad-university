#include <iostream>
using namespace std;
void showNumbersInRange(int range);
void sum(int range);
void average(float range);



int main()
{
    int n;

    showNumbersInRange(12);
    cout << "\n";
    sum(12);
    average(12);
    cout << "\n\n";

    showNumbersInRange(99);
    cout << "\n";
    sum(99);
    average(99);
    cout << "\n\n";
    
    showNumbersInRange(44);
    cout << "\n";
    sum(44);
    average(44);
    cout << "\n\n";

    cout << "Enter a number: ";
    cin >> n;

    while (0 <= n)
    {
        cout << "Numbers from 1 to " << n << " : "; 
        showNumbersInRange(n);
        cout << "\n";
        sum(n);
        average(n);

        cout << "\n\nEnter a number: ";
        cin >> n;
    }
        
}

void showNumbersInRange(int range)
{
    for ( int i = 1; i <= range; i++)
    {
        cout << i << " ";
    }
}

void sum(int range)
{
    int total = 0;
    for ( int i = 1; i <= range; i++)
    {
        total = total + i;
    }
    cout << "Sum: " << total;
}

void average(float range)
{   
    int temp = 0;
    for ( int i = 1; i <= range; i++)
    {
        temp = temp + i;
    }
    float average = temp / range;
    cout << "\nAverage: " << average << endl;
}
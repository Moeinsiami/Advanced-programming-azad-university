#include <iostream>
using namespace std;
void sum(int x, int y);
void showNumbersInRange(int start, int end);
void average(float x, float y);



int main()
{
    char stop;
    do
    {
        char function;
        int x, y;
        cout << "\nchoose function A , B , C or E to exit: " << endl;
        cin >> function;
        stop = function;
        if (function == 'A' || function == 'a')
        {
            cout << "Enter x and y: " << endl;
            cin >> x >> y;
            sum(x, y);
        } else if (function == 'B' || function == 'b')
        {
            cout << "Enter x and y: " << endl;
            cin >> x >> y;
            average(x, y);
        } else if (function == 'C' || function == 'c')
        {
            cout << "Enter x and y: " << endl;
            cin >> x >> y;
            showNumbersInRange(x, y);
        } else {
            cout << "Invalid function";
        }
        cout << "\n\n";
    } while (stop != 'E' && stop != 'e');
}


void sum(int x, int y) // function A
{
    int total = 0;
    for ( int i = x; i <= y; i++)
    {
        total += i;
    }
    cout << "Sum: " << total;
}


void average(float x, float y) // function B
{   
    int sum = 0;
    for ( int i = x; i <= y ; i++)
    {
        sum = sum + i;
    }
    float total = (y - x) +1;
    float average = sum / total;
    cout << "Average: " << average;
}


void showNumbersInRange(int start, int end) // function c
{
    cout << "numbers: ";
    for ( int i = start; i <= end; i++)
    {
        cout << i << " ";
    }
}
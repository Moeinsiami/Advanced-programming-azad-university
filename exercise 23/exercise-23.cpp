#include <iostream>
using namespace std;

int main()
{
    float score;
    cout << "Enter Score: " << endl;
    cin >> score;
    if (score >= 21) // حداکثر نمره 20
    {
        cout << "Invalid score" ;
    } else if (score >= 10) //حداقل نمره قبولی 10
    {
        cout << "pass";
    } else
    {
        cout << "fail";
    }
    
    return 0;
}
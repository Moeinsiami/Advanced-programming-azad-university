#include <iostream>
using namespace std;


void carSpeed(int speed)
{
    if (speed > 120)
    {
        cout << "speed of the car is more than 120";
    } else {
        cout << "speed of the car is less than 120";
    } 
}

void passOrNot(int score)
{
    if (0 <= 10) // چون  صورت  تمرین فقط بررسی قبولی رو خواسنه پس بازه خاصی مشخص نمی کنیم و فقط نمره بالاتر از 10 قبول است
    {
        cout << "passed";
    } else {
        cout << "failed";
    }
}

void range(int number)
{
    if (number >= 0)
    {
        if (number <= 20)
        {
            cout << "in range of 0 to 20";
        } else {
            cout << "not in range of 0 to 20";
        }
    } else {
        cout  << "not in range of 0 to 20";
    }
}

void oddOrEven(int n)
{
    if (n % 2 == 0) {
        cout << "number is Even" << endl;
    } else {
        cout << "number is Odd" << endl;
    }
}

int main()
{
    int speed, score, number, n;
    cout << "Enter car speed: "<< endl;
    cin >> speed;
    carSpeed(speed);

    cout << "\nEnter your score: ";
    cin >> score;
    passOrNot(score);

    cout << "\nEntre nubmer: ";
    cin >> number;
    range(number);
    
    cout << "\nEnter number: ";
    cin >> n;
    oddOrEven(n);

    return 0;
}
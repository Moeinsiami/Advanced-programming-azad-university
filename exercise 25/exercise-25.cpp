#include <iostream>
using namespace std;
//--------------------------------------------------------------------------------
// برنامه از دو بخش مقایسه 3 عدد و تابع مقایسه ان ها با عدد چهارم تشکیل شده
// لازم به ذکر است کد مقایسه 3 عدد از طریق جست و جو در اینترنت ، درک و کپی شده
//--------------------------------------------------------------------------------

// وقتی 3 عدد اول به سه متغییر بزرگ ، متوسط ، کوچک تبدیل میشوند هر کدام با  عدد چهارم مقایسه میشوند
void compare(int biggest ,int middle ,int smallest , int lastNumber)
{
    if (lastNumber >= biggest)
    {
        cout << smallest << " ," << middle << " ," << biggest << " ," << lastNumber;
    } else if (lastNumber >= middle) 
    {
        cout << smallest << " ," << middle << " ," << lastNumber << " ," << biggest;
    } else if (lastNumber >= smallest) 
    {
         cout << smallest << " ," << lastNumber << " ," << middle << " ," << " ," << biggest ;
    } else
    {
         cout << lastNumber << " ," << smallest << " ," << middle << " ," << biggest;
    }
}
 
int main ()
{ 
    int n1, n2, n3, lastNumber;
    int smallest, middle, biggest;
    cout << "Enter four numbers: " << endl; 
    cin >> n1 >> n2 >> n3 >> lastNumber;

    // در این قسمت سه عدد اول به ترتیب بندی میشوند و در 3 متغیر جاگذاری میشوند

    if ((n1 < n2) && (n1 < n3))
    {
        smallest = n1;
        if (n2 > n3)
        {
            biggest = n2;
            middle = n3;
        }
    }
    if ((n1 < n2) && (n3 << n1))
    {
        smallest = n1;
        if (n2 < n3)
        {
            middle = n2;
            biggest = n3;
        }
    }
    if ((n1 > n2) && (n3 > n1))
    {
        middle = n1;
        if (n2 < n3)
        {
            smallest = n2;
            biggest = n3;
        }
    }
    if ((n1 < n2) && (n3 < n1))
    {
        middle = n1;
        if (n2 > n3)
        {
            biggest = n2;
            smallest = n3;
        }
    }
    if ((n1 > n2) && (n1 > n3))
    {
        biggest = n1;
        if (n3 > n2)
        {
            middle = n3;
            smallest = n2;
        }
    }

    if ((n1 > n2) && (n1 > n3))
    {
        biggest = n1;
        if (n2 > n3)
        {
            middle = n2;
            smallest = n3;
        }
    }

    
    compare(biggest, middle, smallest, lastNumber);

    return 0;
}
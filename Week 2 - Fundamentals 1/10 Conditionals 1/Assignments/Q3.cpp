#include <iostream>
using namespace std;
int main(void)
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    if(year % 400 == 0)
    {
        cout << year << " is a Leap Year";
    }
    else if((year % 4 == 0) && (year % 100 != 0))
    {
        cout << year << " is a Leap Year";
    }
    else
    {
        cout << year << " is not a Leap Year";
    }
    return 0;
}
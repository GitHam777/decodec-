#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n % 5 == 0)
    {
        if(n % 3 == 0)
        {
            cout << "Divisible by 5 and 3";
        }
        if(n % 3 != 0)
        {
            cout << "Not possible";
        }
    }
    if(n % 5 != 0)
    {
        cout << "Not possible";
    }
    return 0;
}
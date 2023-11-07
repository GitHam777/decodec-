#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    if(a > b)
    {
        cout << a << " is greatest";
    }
    else
    {
        cout << b << " is greatest";
    }
    return 0;
}
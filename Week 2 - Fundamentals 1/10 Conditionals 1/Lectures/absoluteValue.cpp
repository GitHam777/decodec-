#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 0)
    {
        cout << -n;
    }
    else
    {
        cout << n;
    }
    return 0;
}
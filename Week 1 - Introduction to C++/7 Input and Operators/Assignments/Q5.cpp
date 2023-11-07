#include <iostream>
using namespace std;
int main(void)
{
    char a,b;
    cout << "Enter a character: ";
    cin >> a;
    cout << "Enter another character: ";
    cin >> b;
    int diff = (int) a - (int) b;
    if(diff < 0)
    {
        diff *= -1;
    }
    cout << "ASCII Difference: " << diff;
    return 0;
}
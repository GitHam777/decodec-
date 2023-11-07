#include <iostream>
using namespace std;
int main(void)
{
    char x;
    cout << "Enter a character: ";
    cin >> x;
    int n = (int) x;
    if(((n >= 65) && (n <= 90)) || ((n >= 97) && (n <= 122)))
    {
        cout << "It is an alphabet";
    }
    else if((n >= 48) && (n <= 57))
    {
        cout << "It is a number";
    }
    else
    {
        cout << "It is a special character";
    }
    return 0;
}

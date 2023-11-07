#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout << "Enter marks of A, B and C: ";
    cin >> a >> b >> c;
    if((a < b) && (a < c))
    {
        cout << "A got the least"; 
    }
    else if((b < a) && (b < c))
    {
        cout << "B got the least";
    }
    else
    {
        cout << "C got the least";
    }
    return 0;
}
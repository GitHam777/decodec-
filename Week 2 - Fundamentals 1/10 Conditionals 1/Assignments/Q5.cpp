#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout << "Enter 3 sides of a triangle: ";
    cin >> a >> b >> c;
    if(((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        if((a == b) && (b == c) && (a == c))
        {
            cout << "Equilateral Triangle";
        }
        else if((a == b) || (b == c) || (a == c))
        {
            cout << "Isoceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
    else
    {
        cout << "Triangle not formed";
    }
    return 0;
}
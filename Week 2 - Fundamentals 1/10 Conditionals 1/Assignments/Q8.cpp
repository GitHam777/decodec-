#include <iostream>
using namespace std;
int main(void)
{
    int x1, y1, x2, y2, x3, y3;
    float m12, m23;
    cout << "Enter co-ordinates of x1, y1: ";
    cin >> x1 >> y1;
    cout << "Enter co-ordinates of x2, y2: ";
    cin >> x2 >> y2;
    cout << "Enter co-ordinates of x3, y3: ";
    cin >> x3 >> y3;
    m12 = (y2 - y1) / (x2 - x1);
    m23 = (y3 - y2) / (x3 - x2);
    if(m12 == m23)
    {
        cout << "Points fall in a straight line";
    }
    else
    {
        cout << "Points dont fall in a straight line";
    }
    return 0;
}
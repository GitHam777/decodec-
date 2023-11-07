#include <iostream>
using namespace std;
int main(void)
{
    int radius, height;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
    float volume = 3.1412 * radius * radius * height;
    cout << "Volume of cylinder is: " << volume;
    return 0;
}
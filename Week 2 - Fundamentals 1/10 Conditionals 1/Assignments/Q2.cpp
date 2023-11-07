#include <iostream>
using namespace std;
int main(void)
{
    int r = 5;
    float area = 3.142 * r * r;
    float circumference = 2 * 3.142 * r;
    if(area > circumference)
    {
        cout << "Area is larger";
    }
    else
    {
        cout << "Circumference is larger";
    }
    return 0;
}
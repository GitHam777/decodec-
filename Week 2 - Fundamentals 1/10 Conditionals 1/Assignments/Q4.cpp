#include <iostream>
using namespace std;
int main(void)
{
    int length = 10, breadth = 5;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if(area > perimeter)
    {
        cout << "Area is larger";
    }
    else if(perimeter > area)
    {
        cout << "Perimeter is larger";
    }
    else
    {
        cout << "Both are same";
    }
    return 0;
}
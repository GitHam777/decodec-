#include <iostream>
using namespace std;
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void sortZeroesAndOnes(int array[], int n)
{
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < zero)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
    }
}
int main(void)
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " number of 0s and 1s: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Before Sorting: ";
    printArray(array, n);
    sortZeroesAndOnes(array, n);
    cout << endl;
    cout << "After Sorting: ";
    printArray(array, n);
    return 0;
}
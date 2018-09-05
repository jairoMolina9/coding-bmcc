// inverse array
#include <iostream>
void reverseArray(int*, const int);
using namespace std;

int main ()
{
    const int size = 4;
    int arr[size] = {4,2,6,7};

    reverseArray(arr, size);
}
void reverseArray(int *array, const int size)
{
    int temp;

    if(size <= 0)
    {
        cout << "Error array is less than or equal to 0" << endl;
        return;
    }
    else
    {
        for(int i = 1; i <= size/2; i++)
        {
            temp = array[i-1];
            array[i-1] = array[size-i];
            array[size-i] = temp;
        }
    }

    for(int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] = " << array[i] << endl;
    }
}
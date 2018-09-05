/*
 * Jairo Molina
 * 23499086
 * Fall 2018, CSC 211
 * Tuesday, Sept 4 2018
 * 11:23 PM
 *
 * Dr. Azhar
 */

#include <iostream>
int getSize();
int* getArray(const int);

void printArray(int*, const int);
void reverseArray(int*, const int);

using namespace std;

int main ()
{
    const int size = getSize();
    int* array = getArray(size);

    printArray(array, size);
    reverseArray(array, size);

    cout << "\nGood bye!" << endl;
}

int getSize()
{
  int length;
  cout << "Enter legth of number serie: " << endl;
  cin >> length;
  cout << "\n";
  const int size = length;
  return size;
}

int* getArray(const int size)
{
  int* array = new int [size];
  for(int i = 0 ; i < size ; i++)
  {
    cout << "Enter [" << i << "] :" << endl;
    cin >> array[i];
  }
  return array;
}
void printArray(int *array, const int size)
{
  cout << "\n**Array List**\n";
  for(int i = 0 ; i < size ; i++)
  {
      cout << "Index [" << i << "] = " << array[i] << endl;
  }
  cout << "\n";
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
    cout << "\n**Reverse Array List**\n";
    for(int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] = " << array[i] << endl;
    }
}

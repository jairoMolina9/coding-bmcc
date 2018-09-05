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

/*****FUNCTION PROTOTYPES*****/
int getSize();
int* getArray(const int);

void printArray(int*, const int);
void reverseArray(int*, const int);

using namespace std;

int main ()
{

  /*The variables SIZE and ARRAY hold the value of the functions because
   *if otherwise we  inserted them into the arguments of the function
   *reverseArray the functions would run twice and produce mixed results
   */
    const int size = getSize();
    int* array = getArray(size); //the pointer addresses the array

    /***DISPLAY ARRAYS***/
    printArray(array, size);
    reverseArray(array, size);

    cout << "\nGood bye!" << endl;
}

int getSize()
{
  int length; //since a constanst var must always be initialized we have to use length as a temporary holder
  cout << "Enter legth of number serie: " << endl;
  cin >> length;
  cout << "\n"; // asthetics
  const int size = length;
  return size; //returns a constant value
}

int* getArray(const int size)
{
  int* array = new int [size]; //dynamic memory allocation
  for(int i = 0 ; i < size ; i++)
  {
    cout << "Enter [" << i << "] :" << endl;
    cin >> array[i];
  }
  return array;

}
void printArray(int *array, const int size)//to send an array, pass it as a pointer
{
  if(size <= 0)
  {
      cout << "Error array is less than or equal to 0" << endl;
      return;
  }
  else
  {
  cout << "\n**Array List**\n";

  for(int i = 0 ; i < size ; i++)
   {
      cout << "Index [" << i << "] = " << array[i] << endl;
   }
  }

  cout << "\n"; // asthetics
}

void reverseArray(int *array, const int size)
{
    int temp;

    if(size <= 0)
    {
      return; //no need to print error message because it will be printed by function printArray
    }

    for(int i = 1; i <= size/2; i++)
    {

      temp = array[i-1]; // value being changed is held in a temporary variable e.g temp = B
      array[i-1] = array[size-i]; //value has switched e.g [0] = A , [1] = A
      array[size-i] = temp; //the index that was switched now has the temporary value [0] = A, [1] = B

    }


    cout << "\n**Reverse Array List**\n";

    for(int i = 0; i < size; i++)
    {
        cout << "Index [" << i << "] = " << array[i] << endl;
    }

    delete [] array; //erases data and allows memory allocated to be available

    return;
}

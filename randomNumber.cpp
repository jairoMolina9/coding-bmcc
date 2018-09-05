/*
 * Jairo Molina
 * 23499086
 * Fall 2018, CSC 211
 * Thursday, Oct 30th 2018
 * 7:00 PM
 *
 * Dr. Azhar
 */

#include <iostream>
#include <ctime>

//function prototype
void printResult(int, int);

//pointer directs at argument's memory
void randomGenerator(int , int* );

using namespace std;

int main() {
    const int size = 10000; //secures length of array

    int list_number [size];

    int even_total = 0; //serves as counter

    int odd_total = 0; //serves as counter

    //calls the function and sets arguments
    randomGenerator(size, list_number);

    /*Algorithm to identify odd and even values in the array */
    for (int i : list_number) {

        // true = even
        if(i % 2 == 0)
            even_total++; //increments the total amount of even numbers by one

        // true = odd
        if(i % 2 != 0)
            odd_total++;  //increments the total amount of odd numbers by one
    }

    //Displays final message
    printResult(even_total,odd_total);

    return 0;
}

// pointer allows to modify the values of the second argument
void randomGenerator(const int size, int* random_list)
{
    //resets random function, allows to generate new random numbers
    srand(time(nullptr));

    for(int i = 0; i < size; i++)
    {
        //inserts a random number between 1-10000 to the array's index
        random_list[i] = rand()%10000+1;

    }

}

// total values are passed from the main
void printResult(int evenTotal, int oddTotal)
{
    cout << "Even total: "<< evenTotal << "\nOdd total: " << oddTotal << endl;

    cout << "Ratio of even to odd: " << evenTotal << ":" << oddTotal << endl; // ratio A to B same as A:B thus ratio of Even to Odd = Even:Odd
}

/* The ratio of rand() should be random, sometimes EVEN should
 * have a greater value than ODD and it seems that how it is in this
 * program
 */

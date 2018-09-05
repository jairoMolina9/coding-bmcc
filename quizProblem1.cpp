/*
 * Jairo Molina
 * 23499086
 * Fall 2018, CSC 211
 * Tuesday, Sept 4 2018
 * 7:00 PM
 *
 * Dr. Azhar
 */

#include <iostream>

using namespace std;

string getName();
int getCredit();

class StudentInfo {

private:

    string name;
    int credit;

public:

    /*in-class prototype*/
    void addCredits(int, string);
    bool graduationReady(int);

    void result()
    {
      if(graduationReady(credit) == 1) //denotes ready
      {
        cout << "\n" << name << " completed " << credit << " credits and can file for graduation\n" <<endl;
      }
      else //denotes false
      cout << "\n" << name << " completed " << credit << " credits and needs " << 120-credit <<
      " credits to graduate\n" << endl;
    }
}; //check ';' after every class

void StudentInfo::addCredits(int number, string n)
{
  name = n;
  credit = number + 30; //add 30 credits
}

bool StudentInfo::graduationReady(int cred)
{
  if(cred < 120) {return 0;} //flag denotes graduation requirement met
  else{return 1;}
}

int main ()
{

    StudentInfo stud;

    stud.addCredits(getCredit(), getName()); //values from functions passed as arguments
    stud.result(); // display final result
}

string getName()
{
  string name;
  cout << "Enter name: " << endl;
  cin >> name;

  return name;
}

int getCredit()
{
  int credit = 0;
  cout << "Enter credit: " << endl;
  cin >> credit;

  return credit;
}

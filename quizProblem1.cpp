// classes example
#include <iostream>
using namespace std;

class StudentInfo {
private:
    string name;
    int credit;
public:
    void addCredits(string, int);
    void result() {cout << "Name: " << name << " Credits: " << credit <<endl;}
};

void StudentInfo::addCredits(string n, int number) {
     name = n;
     credit = number + 30; //add 30 more as the question stated
}

int main ()
{
    string name;
    int credit = 0;
    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter credit: " << endl;
    cin >> credit;

    StudentInfo stud;

    stud.addCredits(name,credit);
    stud.result();
}
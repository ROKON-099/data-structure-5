#include<iostream>
using namespace std;
class person
{

public:
    string name;
    int age;

    void displayperson()
    {
        cout << "Name:" <<name <<endl;
        cout << "Age:" <<age <<endl;




    }

};
class Teacher:  public person
{
public:
    int salary;
    string subject;

    void displayTeacher()

    {
        displayperson();
        cout << "Salary:"<<salary <<endl;
        cout << "Subject:" <<subject <<endl;


    }


};
int main ()
{
    Teacher T1;
    T1.name="Rokon";
    T1.age=25;
    T1.salary=25000;
    T1.subject="OOP";
    T1.displayTeacher();
    return 0;




}

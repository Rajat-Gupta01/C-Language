// ==============================OOP Journey==================
//  it is not compulsory to use OOP but if we use it then it makes much easierto oranise and manage data
//  OOP is a programming paradigm that uses objects and classes to design applications and computer programs.
// objects are entities in the real world.
// Class is like a blueprint of other entities or group of objects.

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // non parameterized constructor
    Teacher()
    {
        dept = "computer science";
    };

    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        // dept = d;
        subject = s;
        salary = sal;
    }
    // properties
    string name;
    string dept;
    string subject;

    // methods or member functions
    void change_dept(string newDept)
    {
        dept = newDept;
    };
    // setter: to set the private values
    void setSalary(double s)
    {
        salary = s;
    }
    // getter: to get the values of private values
    double getSalary()
    {
        return salary;
    }
void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout << "Subject:" << subject << endl;
    cout << "Department:" << dept << endl;
    cout << "Salary:" << salary << endl;
}
};

 
int main()
{
    Teacher t1("Rajat", "CSE", "DAA", 20000);
    t1.getInfo();
    // t1.name = "John";
    // // t1.dept = "Computer Science";
    // t1.subject = "C++";
    // t1.setSalary(25000);
    // t1.change_dept("Mathematics");
    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // cout << t1.subject << endl;
    // cout << t1.getSalary() << endl;

    return 0;
}

// encapsulation: wrapping up of data and member functions in a single unit==> data properties + member functions==> class
// it helps in data hiding

// constructor: a special method that automatically invokes at the time of object creation. used for initialisation.
//  same name as class
//  constructor doesn't have a return type
//  only called once(automatically), at object creation
//  memory allocation happens when constructor is called
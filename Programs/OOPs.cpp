#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    Teacher(){
        cout << "hi it is a constructor"<<endl;
     }
    string name;
    string subject;
    string dept;
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // setter: to set private values
    void setSalary(double s)
    {
        salary = s;
    }
    // getter: to get the values of private
    double getSalary()
    {
        return salary;
    }
};

class Student
{
public:
    string name;
    int Roll;
    int Mob;
};

class Account{
    private:
        string balance;  //data hiding
        string password; //data hiding

    public:
        string accountno;
        string username;
    
};

int main()
{
    Teacher t1;
    t1.name = "Rajat";
    t1.subject = "C++";
    t1.dept = "CSE";
    // t1.salary = 10000;
    t1.setSalary(10000);
    cout << t1.name << endl
         << t1.dept << endl;
    // t1.changeDept("ECE");
    // cout << t1.name << endl
    //      << t1.dept << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
// encapsulation: wrapping up of data & member functions in a single unit called class; it helps in data hiding(to hide sensitive data)

//constructor: special method invoked automatically at the time of object creation. used for initialisation.
// 1. same name as class;
// 2. constructor doesn't have a return type;
// 3. constructor called once (automatically), at object notation.
// 4. memory allocation happens when constructor is called.
// ---------------------types of constructor
// 1. non-parameterized
// 2. parameterized
// 3. copy constructor

// destructor: special method invoked automatically at the time of object destruction. used for deinitialisation.1
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string fname;
     string lname;
    string empID;
    char gender;

private:
    float basicSalary;
    float bonus;

public:
    void inputInfo() {
        cout << "Enter Your First Name: ";
        cin>>fname;
 cout << "Enter Your Last Name: ";
        cin>>lname;

        cout << "Enter Your ID: ";
        cin>>empID;

        cout << "Enter Your Gender: ";
        cin>>gender;
    }

    void setSalary(float b, float bo) {
        basicSalary = b;
        bonus = bo;
    }

    float getTotalSalary() {
        return basicSalary + bonus;
    }

    void displayInfo() {
        cout << "\n===== Employee Information =====" << endl;
        cout << "Name: " << lname + lname<< endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Gender: " << gender << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << getTotalSalary() << endl;
    }
};

int main() {
    Employee info;

    info.inputInfo();

    float A, B;

    cout << "Enter Your Basic Salary: ";
    cin >>A ;

    cout << "Enter Your Bonus:";
    cin >>B;

    info.setSalary(A, B);

    info.displayInfo();

    return 0;
}

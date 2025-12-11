#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name="Bekalu";
    string empID="nsr/0266/17";
    char gender='M';

private:
    float basicSalary;
    float bonus;

public:
    
    void setSalary() {
        basicSalary = 2000;
        bonus = 500;
    }

    float getTotalSalary() {
        float Total;
       
        Total= basicSalary + bonus;
         return Total;
    }

    void displayInfo() {
        cout << "\n===== Employee Information =====" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Gender: " << gender << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << getTotalSalary() << endl;
    }
};

int main() {
    Employee beka;


    beka.setSalary();

    beka.displayInfo();

    return 0;
}

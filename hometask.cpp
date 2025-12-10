#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    string empID;
    string gender;

private:
    float basicSalary;
    float bonus;

public:
    void inputInfo() {
        cout << "Enter Your Name: ";
        getline(cin, name);

        cout << "Enter Your ID: ";
        getline(cin, empID);

        cout << "Enter Your Gender: ";
        getline(cin, gender);
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
        cout << "Name: " << name << endl;
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

    float b, bo;

    cout << "Enter Your Basic Salary: ";
    cin >> b;

    cout << "Enter Your Bonus: ";
    cin >> bo;

    info.setSalary(b, bo);

    info.displayInfo();

    return 0;
}

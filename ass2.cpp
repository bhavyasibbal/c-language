#include <iostream>
using namespace std;
class employee
{
public:
    int empId, hrsWorked, salaryPerHr, salary;
    void input()
    {
        cout << "enter employee id:  ";
        cin >> empId;
        cout << "enter hours worked by the employee:  ";
        cin >> hrsWorked;
        cout << "Enter salary per hour:  ";
        cin >> salaryPerHr;
    }
    void calculateSalary()
    {
        if (hrsWorked <= 40)
            salary = hrsWorked * salaryPerHr;
        else
            salary = hrsWorked * salaryPerHr + 1.5 * (hrsWorked - 40);
    }
    void display()
    {
        cout << "the gross salary for employee number " << empId << " is " << salary << endl;
    }
};
int main()
{
    employee obj;
    char choice;
    cout << "do you want to enter the details, press(y/n): " << endl;
    cin >> choice;
    while (choice == 'y')
    {
        obj.input();
        obj.calculateSalary();
        obj.display();
        cout << "Do you want to enter details for another employee? Press (Y/N): ";
        cin >> choice;
    }
}

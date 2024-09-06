#include <iostream>
using namespace std;

class Employee {
private:
    int Age;
    int YearsOfService;
    int Salary;


public:
    Employee(int a, int y, float s) : Age(a), YearsOfService(y), Salary(s) {}


    void SetAge(int a) {
        Age = a;
    }
    int GetAge() const {
        return Age;
    }


    void SetYOS(int y) {
        YearsOfService = y;
    }
    int GetYOS() const{
        return YearsOfService;
    }


    void SetSalary(int s) {
        Salary = s;
    }
    float GetSalary() const{
        return Salary;
    }


    void Info() const {
        cout << "Вік: " << Age << endl;
        cout << "Стаж роботи: " << YearsOfService << " років" << endl;
        cout << "Зарплата: " << Salary << " грн" << endl;
    }
};

int main() {
    Employee emp1(30, 8, 20000.0), emp2(45, 20, 35000.0);
    // emp1.SetAge(30);
    // emp1.SetYOS(8);
    // emp1.SetSalary(20000.0);

    // emp2.SetAge(45);
    // emp2.SetYOS(20);
    // emp2.SetSalary(35000.0);

    cout << "Інформація про першого службовця:\n";
    emp1.Info();

    cout << "\nІнформація про другого службовця:\n";
    emp2.Info();

    return 0;
}
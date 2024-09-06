#include <iostream>
#include <cmath> 
using namespace std;

class Employee {
private:
    int Age;
    int YearsOfService;
    double Salary; 

public:
    Employee() : Age(0), YearsOfService(0), Salary(0.0) {}

    Employee(int a, int y, double s) : Age(a), YearsOfService(y), Salary(s) {}

    void SetSalary(double s) {
        Salary = s;
    }


    double GetSalaryInThousands() const {
        double SalaryInThousands = Salary / 1000;  
        return round(SalaryInThousands * 100) / 100; 
    }

    void Info() const {
        cout << "Вік: " << Age << "\nСтаж роботи: " << YearsOfService
             << "\nЗарплата: " << Salary << " доларів" << endl;
    }
};

int main() {
    Employee emp1(30, 5, 14567.0);

    emp1.Info();

    cout << "Зарплата в тисячах доларів (округлено до 10 доларів): "
         << emp1.GetSalaryInThousands() << " тисяч доларів" << endl;

    return 0;
}

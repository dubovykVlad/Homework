#include <iostream>
using namespace std;

int Function(unsigned short int num1, unsigned short int num2) {
    if (num2 == 0) {
        return -1;  // Повертаємо -1 для позначення помилки
    } else {
        return num1 / num2;
    }
}

int main() {
    unsigned short int num1, num2;
    
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    
    int result = Function(num1, num2);
    
    if (result == -1) {
        cout << "Помилка: ділення на нуль неможливе.\n";
    } else {
        cout << "Результат: " << result << "\n";
    }
    
    return 0;
}

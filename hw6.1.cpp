#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; /*будь-яке число в степені 0 дорівнює 1*/
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    cout << "Введіть число: ";
    cin >> base;
    cout << "Введіть показник степеня: ";
    cin >> exponent;

    int result = power(base, exponent);
    cout << base << " у степені " << exponent << " дорівнює " << result << endl;

    return 0;
}

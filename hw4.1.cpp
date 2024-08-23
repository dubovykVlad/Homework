#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter 1st number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter 2nd number: " << std::endl;
    std::cin >> b;
    if (a > b)
        a = b;
    else
        b = a;
    return 0;
}


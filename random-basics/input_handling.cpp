#include <iostream>

int main() {
    
    double a = 0;
    std::cin >> a;
    if (std::cin) {
        std::cout << "Success converting input to double";
    } else {
        std::cout << "Failed converting input to double";
        return 1;
    }
}
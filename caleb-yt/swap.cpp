#include <iostream>

// passing by reference --> passing by value won't swap
void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "Inside: a: " << a << "\tb: " << b << std::endl;
}

int main() {
    int a = 10;
    int b = 20;

    swap(a, b);
    std::cout << "Outside: a: " << a << "\tb: " << b << std::endl;
}
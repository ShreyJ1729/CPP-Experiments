#include <iostream>

int main() {
    // auto --> infer datatype from assigned data
    auto a = 5U; // unsigned int
    auto b = 5UL; // unsigned long
    auto c = 5ULL; // unsigned long long
    auto d = 5.0; // double
    auto e = 5.0F; // float
    auto f = 5.0L; // long double

    // this is not literals but we can put it here.
    double x;
    double y;
    x = 10;
    // sets x=100;
    // then y=x
    // basically y = (x = 100);
    y = x = 100;
    std::cout << x << "\t" <<  y << std::endl;
}
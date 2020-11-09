#include <iostream>

// passing by reference --> passing by value won't swap
// this time we use templates to swap arbitrary datatypes
// INFINTE POWERRRRR

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

    // std::cout << "Inside: a: " << a << "\tb: " << b << std::endl;
}

// you can even overload a templatized function
template <typename T>
void swap(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << std::endl;

    std::string c = "Shrey";
    std::string d = "Joshi";
    swap(c, d);

    std::cout << c + " " + d << std::endl;

    int up[] = {1, 2, 3, 4, 5, 6};
    int down[] = {6, 5, 4, 3, 2, 1};
    
    for (int i = 0; i<6; i++)
    {
        std::cout << up[i] << " " << down[i] << "\t";
    }
    std::cout << std::endl;

    swap(up, down, 6);
    
    for (int i = 0; i<6; i++)
    {
        std::cout << up[i] << " " << down[i] << "\t";
    }
    std::cout << std::endl;
}
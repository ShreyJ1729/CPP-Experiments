#include<iostream>
#include<string>


int main() {
    using namespace std;
    string fname;
    cin >> fname;
    cout << "Hello, " << fname << "!\n";

    cout << "Enter floating point number n";
    double n;
    cin >> n;
    cout << "n == " << n << endl
         << "double n == " << 2*n << endl
         << "n+1 == " << n+1 << endl;
    
    char c = 'x';
    int i1 = c;
    int i2 = 'x';

    char c2 = i1;
    cout << c << ' ' << i1 << ' ' << c2 << '\n';  


    int a = 20000;
    c = a; // try to squeeze a large int into a small char
    int b = c;
    if (a != b) // != means “not equal”
        cout << "oops!: " << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters\n";    
    return 0;
}
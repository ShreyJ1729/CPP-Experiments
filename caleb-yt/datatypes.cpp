#include <iostream>
#include <climits>
using namespace std;

int main() {
    /*
        short <= int <= long <= long long
        datatypes guarenteed to be (at least):
        short - 16
        int - 16
        long - 32
        long long - 64
    */

    short a;
    int b;
    long c;
    long long d;

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;


    cout << "short size: " << 8*sizeof(short) << " bits\n";
    cout << "int size: " << 8*sizeof(int) << " bits\n";
    cout << "long size: " << 8*sizeof(long) << " bits\n";
    cout << "long long size: " << 8*sizeof(long long) << " bits\n";

    cout << "short max: " << SHRT_MAX <<endl;
    cout << "int max: " << INT_MAX <<endl;
    cout << "long max: " << LONG_MAX <<endl;
    cout << "long long max: " << LLONG_MAX <<endl;
    
    unsigned char x = 'a';
    cout << (int) x << endl;
}
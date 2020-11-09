#include <iostream>

using namespace std;
int main() {
    int num = 30;
    cout << num << endl;

    // prefix "0x" --> hexadecimal
    num = 0x30;
    cout << num << endl;

    // prefix "0" --> octal
    num = 030;
    cout << num << endl;


    // convert decimal to hex/oct
    num = 30;
    cout << hex << num << endl;
    cout << oct << num << endl;
}
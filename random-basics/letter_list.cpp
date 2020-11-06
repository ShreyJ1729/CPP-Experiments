#include <iostream>
#include <string>

int main() {
    using namespace std;
    int i = 97;
    while (i < 123) {
        cout << char(i) << '\t' << i  << endl;
        i++;
    }

    cout << "Enter password: ";
    int pass;
    cin >> pass;
    if (pass==27) {
        cout << "Correct Password!";
    }
}
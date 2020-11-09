#include <iostream>


using namespace std;
int main() {
    char single_quote = '\'';
    cout << single_quote << endl;
    cout << "Hello \t World!\n";
    cout << "Hello \0 hi";
    cout << endl;

    bool test = 0;
    cout << test << endl;
    cout << boolalpha << test;
}
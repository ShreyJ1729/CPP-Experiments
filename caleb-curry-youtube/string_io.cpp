#include <iostream>
#include <string>
#include <climits>

using namespace std;
int main() {
    // tokenizes by space delimiter --> one word at a time
    string input;
    cin >> input;
    cout << input << endl;

    // clear input buffer after cin is used --> dangling '\n' + other characters in input buffer
    cin.clear();
    fflush(stdin);
    // read in string line by line
    string line_input;
    getline(cin, line_input);
    cout << line_input << endl;

    // input line by line for c-style string. bad.
    char c_style[10];
    cin.getline(c_style,10);
    cout << c_style;
}
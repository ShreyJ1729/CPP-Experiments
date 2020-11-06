#include <iostream>
#include <string>

// two ways to use strings:
// C-style strings --> backwards compatibility
// C++ strings (string class)

using namespace std;
int main() {
    string greeting = "hello";
    cout << greeting + " there" << endl;
    cout << greeting.length() << endl;

    //  an uninitialized string in C++ is an empty string ""
    string empty;
    cout << empty << endl;

    // C-style strings are character arrays
    char string_name[] = "example string";
    // can't reassign values to these
    // C-style strings are bad

    // inserts at index of string
    greeting.insert(3, "\t\t\t");
    cout << greeting << endl;
    // erase that many characters at index (going --> )
    greeting.erase(3, 2);
    cout << greeting << endl;
    // if one param --> delete all after
    greeting.erase(2);
    cout << greeting << endl;

    greeting = "thisisastring";
    // pops last character
    greeting.pop_back();
    cout << greeting << endl;

    greeting = "you nincompoop";
    greeting.replace(4, greeting.size()-1, "BLEEP");
    cout << greeting << endl;

    greeting = "you little nincompoop";
    // string.find gives the starting position of string u wanna match
    int badword_pos = greeting.find("nincompoop");

    // "nincompoop" here is a c-style string so we can't use .size() or .length.
    greeting.replace(badword_pos, badword_pos + sizeof("nincompoop"), "BLEEP");
    cout << greeting << endl;

    greeting = "Segmentation Mask";
    cout << greeting << endl;
    cout << greeting.substr(3, 3) << endl;
    cout << "*feminazi gets triggered*" << endl;

    // gets first index of instance of any character in passed in string
    // There's also find_last_of, find_not_first_of, and find_not_last_of
    cout << greeting.find_first_of("aeiou") << endl;
    cout << greeting.find_first_of("!") << endl;
    // huge number will be printed bc it's an npos
    // returned index is of type unsigned long. an unsigned long that's -1 overflows to max value - 1
    cout << (unsigned long) -1 << endl;

    // this -1 is useful for checking if a value is in a string at all
    cout << "\"!\" is in greeting string: " << boolalpha << (greeting.find_first_of("!") == -1) << endl;

    // == for string comparison
    cout << boolalpha << (greeting == "Segmentation Mask") << endl;
    
    // .compare for alphabetic string comparison
    cout << greeting.compare("Segmentation Oak") << endl;
    cout << greeting.compare("Segmentation Loak") << endl;
}
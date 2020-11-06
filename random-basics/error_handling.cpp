#include <iostream>

int main() {
    using namespace std;

    int num;
    cin >> num;

    if (num%2==0) {
        throw runtime_error("Number is even. That's illegal");
    }
    
    cout << num << endl;
    cerr << "This is an example cerr.";
    throw out_of_range("");
}
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    cout << 10%3 << endl;
    cout << remainder(10, 3) << endl;
    // this next line will return error
    // cout << 10.3%2.5 << endl;
    cout << remainder(10.3, 2.5) << endl;

    cout << fmod(10.6, 2.1) << endl;
}
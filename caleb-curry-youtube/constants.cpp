#include <iostream>

#define X 10

using namespace std;
int main() {
    // const preferred over #define bc scope restricted.
    const int x = 10;

    // these next two lines won't work. const accepts value at compile time.
    // const int y;
    // y = 3;

    cout << X << endl;

    enum { z = 3 }

}
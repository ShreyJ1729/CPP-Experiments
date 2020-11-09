#include <iostream>
#include <float.h>

using namespace std;

int main() {
    cout << "float size: " << 8*sizeof(float) << " bits" << endl;
    cout << "double size: " << 8*sizeof(double) << " bits" << endl;
    cout << "long double size: " << 8*sizeof(long double) << " bits" << endl;
    
    float a = 10. / 3;
    cout << a << endl;
    a *= 100000000000;
    cout << fixed << a << endl;
    cout << "Float sigfigs: " << FLT_DIG << endl;


    double b = 10. / 3;
    cout << b << endl;
    b *= 100000000000;
    cout << fixed << b << endl;
    cout << "Double sigfigs: " << DBL_DIG << endl;

    long double c = 10. / 3;
    cout << c << endl;
    c *= 100000000000;
    cout << fixed << c << endl;
    cout << "Long Double sigfigs: " << LDBL_DIG << endl;

}
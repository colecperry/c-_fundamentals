#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double f = 3.14159;
    cout << setprecision(5) << f << endl;
    cout << setprecision(9) << f << endl;
    cout << setprecision << fixed; // Fixed uses fixed floating point precision -> the value is represented with exactly as many digits as the decimal part
    cout << setprecision(5) << f << endl;
    cout << setprecision(9) << f << endl;
    return 0;
}

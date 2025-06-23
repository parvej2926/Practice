#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

int main() {
    try {
        double x, t;
        cout << "Enter x and t: ";
        cin >> x >> t;

        if (x < 0 || t <= 0) throw invalid_argument("x must be ≥ 0 and t > 0");

        double m = ((4 * t) / sqrt(10 * t)) / (sqrt(x * t) + 100);
        cout << "m = " << m << endl;
    } catch (exception& e) {
        cout << e<< endl;
    }

    return 0;
}

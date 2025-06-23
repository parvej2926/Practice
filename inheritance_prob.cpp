#include <iostream>
#include <cmath>
using namespace std;

class MathBase {
public:
    double sqrtValue(double val) {
        return sqrt(val);
    }
};

class ExpressionParts : public virtual MathBase {
public:
    double numerator(double t) {
        return (4 * t) / sqrtValue(10 * t);
    }

    double denominator(double x, double t) {
        return sqrtValue(x * t) + 100;
    }
};

class FinalExpression : private virtual ExpressionParts {
public:
    double calculate(double x, double t) {
        double num = numerator(t);
        double den = denominator(x, t);
        return num / den;;
    }
};

int main() {
    FinalExpression obj;
    double x, t;
    cout << "Enter values of x and t: ";
    cin >> x >> t;

    double m = obj.calculate(x, t);
    //
    //
    cout << "Result (m): " << m << endl;

    return 0;
}

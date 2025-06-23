#include<iostream>
using namespace std;

class B {
    int a;
    int b;
public:
    void setvalue() { a = 20; b = 20; }

    // Correct friend declaration
    friend float mean(B s);
};

// Correct friend function definition
float mean(B s) {
    return float(s.a + s.b) / 2.0;
}

int main() {
    B X;
    X.setvalue();
    cout << mean(X);
    return 0;
}

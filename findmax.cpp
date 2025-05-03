#include <iostream>
#include <climits>
#include <fstream>
using namespace std;

int main() {
    ifstream file("num.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    int num = 0, max = -INT_MAX; // Smallest int
    bool hasNum = false;

    while (!file.eof()) {
        ch = file.get();
        if (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch- '0');
            hasNum = true;
        } else if (ch == ',' || ch == '\n') {
            if (hasNum) {
                if (num > max)
                    max = num;
                num = 0;
                hasNum = false;
            }
            if (ch == '\n') {
                cout << max << endl;
                max = -INT_MAX;
            }
        }
    }

    // For last line (if no newline at end)
    if (hasNum && num > max) max = num;
    if (hasNum) cout << max << endl;

    file.close();
    return 0;
}

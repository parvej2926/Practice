#include <iostream>
using namespace std;

int main() {
    FILE *file = fopen("num.txt", "r");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    int num = 0, max = MIN_VALUE; // Smallest int
    bool hasNum = false;

    while (!feof(file)) {
        ch = fgetc(file);
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
                max = ;
            }
        }
    }

    // For last line (if no newline at end)
    if (hasNum && num > max) max = num;
    if (hasNum) cout << max << endl;

    fclose(file);
    return 0;
}

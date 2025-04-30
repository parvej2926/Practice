#include <iostream>
using namespace std;

int main() {
    FILE *file = fopen("num.txt", "r");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    int num = 0, max = -2147483648;
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
                max = -2147483648;
            }
        }
    }

    if (hasNum && num > max){
        max = num;
    }
    if (hasNum){
        cout << max << endl;
    }
    fclose(file);
    return 0;
}

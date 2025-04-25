#include <iostream>

using namespace std;
int main() {
    char ch[100];
    int num = 0;
    bool hasNum = false;
    cin >> ch;
    for (int i = 0; ch[i] != '\0'; i++) {
    if (ch[i] >= '0' && ch[i] <= '9') {
        num = num * 10 + (ch[i] - '0');
        hasNum = true;
    }

    }
    if (hasNum) {
        cout << num;
    } else {
        cout << "No number found";
    }
    return 0;
}

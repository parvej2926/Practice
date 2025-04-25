#include <iostream>
#include <sstream>
#include <stack>
#include <set>
#include <cstring>

using namespace std;

int main() {
    set<string> char1, char2;
    FILE *file1 = fopen("1.txt", "r");
    FILE *file2 = fopen("2.txt", "r");
    FILE *file3 = fopen("3.txt", "w");

    if (!file1 || !file2 || !file3) {
        cout << "invalid" << endl;
        return 1;
    }

    char buffer[1000];
    string str1, str2;

    while (fgets(buffer, sizeof(buffer), file1)) {
        str1 += buffer;
    }
    while (fgets(buffer, sizeof(buffer), file2)) {
        str2 += buffer;
    }

    fclose(file1);
    fclose(file2);

    for (int i = 0; i < str1.length(); i++) {
        string s= str1.substr(i, 1);
        char1.insert(s);
    }
    for (int i = 0; i < str2.length(); i++) {
        string s= str2.substr(i, 1);
        char2.insert(s);
    }

    for (auto it : char1) {
        if (char2.find(it) != char2.end()) {
            fprintf(file3, "%s    ", it.c_str());
        }
    }

    fclose(file3);
}

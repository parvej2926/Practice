#include <iostream>
#include <sstream>
#include <set>
#include <cstring>

using namespace std;

int main() {
    set<string> s;
    FILE *file1, *file2, *file3;

    file1 = fopen("1.txt", "r");
    file2 = fopen("2.txt", "r");
    file3 = fopen("3.txt", "w");

    char ch1[100], ch2[100];
    string str1, str2;


    while (fgets(ch1, sizeof(ch1), file1)) {
        str1 += ch1;
    }
    while (fgets(ch2, sizeof(ch2), file2)) {
        str2 += ch2;
    }

    fclose(file1);
    fclose(file2);
    for (int i = 0; i < str1.length(); i++) {
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                string str = str1.substr(i, 1);
                s.insert(str);
                break;
            }
        }
    }

    for (auto it : s) {
        cout << it << endl;
        fprintf(file3, "%s\n", it.c_str());
    }

    fclose(file3);
    return 0;
}

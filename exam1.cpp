#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words;
    ifstream file("string1.txt");
    string line;
    while (getline(file, line)) {
        if (!line.empty()) {
            words.push_back(line);
        }
    }
    file.close();
    sort(words.begin(), words.end(), [](string a, string b) {
        if (a.length() != b.length()) return a.length() > b.length();
        return a < b;
    });

    for (auto word : words) {
        cout << word << endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream infile("string3.txt");
    string line;
    getline(infile, line);
    infile.close();

    stringstream result;

    for (char ch : line) {
        if (ch == '#') {
            string temp = result.str();
            if (!temp.empty()) {
                temp.pop_back();
                result.str("");
                result.clear();
                result << temp;
            }
        } else {
            result << ch;
        }
    }

    cout << result.str() << endl;
    return 0;
}

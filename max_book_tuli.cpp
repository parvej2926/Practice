#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
#include <algorithm> b
using namespace std;

int main() {
    int max_book = 0;
    string line;
    string max_course = "";

    ifstream f("string1.txt");
    if(!f){
        cout << "Error opening file" << endl;
        return 1;
    }
    while (getline(f, line)) {
        replace(line.begin(), line.end(), '-', ' ');

        stringstream ss(line);
        string name;
        int book;
        ss >> name >> book;

        if (book > max_book) {
            max_book = book;
            max_course = name;
        }
    }

    cout << max_course << max_book << endl;
    return 0;
}

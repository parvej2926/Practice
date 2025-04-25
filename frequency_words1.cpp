#include <iostream>
#include <map>
#include <sstream>
#include <fstream>

using namespace std;

int main() {

    map<string, int> doc1;

    ifstream file("input1.txt");
    stringstream a;
    a << file.rdbuf();
    string word;

    while (a >> word) {
        doc1[word]++;
    }

    for (auto it : doc1) {
        cout << it.first << ": " << it.second << endl;
    }

    cout<<endl;

    return 0;
}

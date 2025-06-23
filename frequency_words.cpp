#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    map<string, int> doc;
    string a="learning to code is learning to code and inovate";
    stringstream p(a);
    string word;
    while(p >> word) {
            doc[word]++;
    }
    for(auto it : doc) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}

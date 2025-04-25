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
        if(doc.find(word) == doc.end())
            doc[word] = 1;
        else
            doc[word]++;
    }
    for(auto it : doc) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}

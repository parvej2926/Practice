#include <iostream>    // clear, erase, find, insert, count, size, empty, swap
#include <map>
using namespace std;

int main() {
    map<string, int> myMap;
    myMap["apple"] = 1;//myMap.insert({"apple", 1});
    myMap["banana"] = 2;//myMap.insert(make_pair("banana", 2));
    myMap["cherry"] = 3;

    for (auto it : myMap) {
        cout << it.first << "  " << it.second << endl;
    }
    for(auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << (*it).first << "   " << (*it).second << endl;
    }

    return 0;
}

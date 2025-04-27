#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<string, int> myMap;
    myMap.insert({"A", 10});
    myMap.insert({"B", 20});
    myMap.insert({"A", 10});
    myMap.insert({"C", 30});
    myMap.insert({"D", 15});
    myMap.insert({"B", 10});
    myMap.insert({"D", 20});

    map<string, int> myMap2;

    for (auto it : myMap2) {
        myMap[it.first] += it.second;
    }
    for (auto it : myMap2) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}

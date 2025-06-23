#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compareByValue(pair<string, int>& a,pair<string, int>& b) {
    return a.second > b.second;
}

int main() {
    map<string, int> myMap = {
        {"apple", 4},
        {"banana", 2},
        {"cherry", 7},
        {"date", 3}
    };

    vector<pair<string, int>> vec(myMap.begin(), myMap.end());

    sort(vec.begin(), vec.end(), compareByValue);

    for (auto p : vec) {

        cout <<a<< p.first << ": " << p.second << "\n";
    }

    return 0;
}

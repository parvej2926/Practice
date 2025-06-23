#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Define the map: string -> vector of ints
    map<string, vector<int>> myMap;

    // Insert some elements (unordered initially)
    myMap["b"] = {4, 1, 7};
    myMap["a"] = {3, 3, 2};
    myMap["c"] = {9, 5, 6};

    // Sort each vector of values
    for (auto& entry : myMap) {
        sort(entry.second.begin(), entry.second.end());
    }

    // Print the contents
    for (auto entry : myMap) {
        cout << entry.first << ": ";
        for (auto val : entry.second) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}

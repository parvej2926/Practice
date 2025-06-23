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

    // Sort the map by the first value in each vector
    vector<pair<string, vector<int>>> sortedVec(myMap.begin(), myMap.end());

    // Sort the vector of pairs by the first value of each vector
    sort(sortedVec.begin(), sortedVec.end(),
        [](const pair<string, vector<int>>& a, const pair<string, vector<int>>& b) {
            return a.second[0] < b.second[0]; // Compare first elements of the vectors
        });

    // Print the sorted map by the first value
    for (auto& entry : sortedVec) {
        cout << entry.first << ": ";
        for (auto val : entry.second) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}

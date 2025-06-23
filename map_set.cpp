#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    // Define the map: string -> pair of two sets
    map<string, pair<set<int>, set<int>>> myMap;

    // Insert some elements
    myMap["a"].first.insert(1);
    myMap["a"].first.insert(3);
    myMap["a"].second.insert(2);
    myMap["a"].second.insert(4);

    myMap["b"].first.insert(5);
    myMap["b"].second.insert(6);
    myMap["b"].second.insert(7);

    // Print the contents
    for (auto entry : myMap) {
        cout << entry.first << ":\n";
        cout << "  Set 1: ";
        for (auto val : entry.second.first) {
            cout << val << " ";
        }
        cout << "\n  Set 2: ";
        for (auto val : entry.second.second) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}

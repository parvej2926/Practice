#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char, greater<char>> mySet; // for descending order
    mySet.insert('a');
    mySet.insert('b');
    mySet.insert('c');

    for (char c : mySet) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}

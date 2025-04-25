#include <iostream>
using namespace std;

int main() {
    const int tableSize = 7;
    int hashTable[tableSize];

    // Initialize table with -1 to represent empty slots
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    int keys[] = {76, 93, 40, 47, 10, 55};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        int key = keys[i];
        int index = key % tableSize;

        // Linear probing if collision occurs
        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }

        hashTable[index] = key;
    }

    // Output final hash table
    cout << "Final hash table:\n";
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] == -1)
            cout << i << ": " << "empty" << endl;
        else
            cout << i << ": " << hashTable[i] << endl;
    }

    return 0;
}

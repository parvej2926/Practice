#include <iostream>
#include <map>
#include <set>
#include <sstream>
using namespace std;

int main() {
    map<string, string> Map_chikungunia;
    multiset<string> locations;
    FILE *file = fopen("victim.txt", "r");
    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file)) {
        string line(buffer);
        for (char &c : line) {
            if (c == '-') {
                c = ' ';
            }
        }
        stringstream ss(line);
        string name;
        int age;
        string location;
        ss >> name >> age >> location;
        locations.insert(location);
        Map_chikungunia[name + " " + to_string(age)] = location;
    }
    fclose(file);
    for (auto it : Map_chikungunia) {
        cout << it.first << " " << it.second << endl;

    }

    string current_location;
    int current_count = 0;
    int highest_freq = 0;
    string highest_freq_location = "";

    for (auto it : locations) {
            if (it == current_location) {
                current_count++;
            } else {
                if (current_count > highest_freq) {
                    highest_freq = current_count;
                    highest_freq_location = current_location;
                }
                current_location = it;
                current_count = 1;
            }
        }

        cout << highest_freq_location << endl;
        cout << "Frequency: " << highest_freq << endl;
}

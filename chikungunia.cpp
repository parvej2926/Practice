#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
using namespace std;

int main() {
    map<string, string> Map_chikungunia;
    multiset<string> locations;
    ifstream file("victim.txt");
    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }
    char buffer[100];
    while (file.getline(buffer, sizeof(buffer))) {
        string line(buffer);
        for (char& c : line) {
            if (c == '-') {
                c = ' ';
            }
        } //bari 45 barishal
        stringstream ss(line);
        /*
       bari
       45
       barishal */
        string name;
        int age;
        string location;
        ss >> name >> age >> location;
        locations.insert(location);

        Map_chikungunia[name + " " + to_string(age)] = location;// bari 45 barishal
    }
    file.close();
    for (auto& pair : Map_chikungunia) {
        cout << pair.first << " " << pair.second << endl;

    }

    string current_location="";
    int current_count = 0;
    int highest_freq = 0;
    string highest_freq_location = "";

    for (auto& it : locations) {
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

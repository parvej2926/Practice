#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Component {
    string name;
    int value; // in W/m²
};

void printBar(int value) {
    int length = value / 2; // scale bar length
    for (int i = 0; i < length; ++i) cout << "#";
    cout << " " << value << " W/m²";
}

int main() {
    vector<Component> components = {
        {"Incoming Solar", 340},
        {"Reflected", 102},
        {"Absorbed", 238},
        {"Emitted", 239}
    };

    cout << "Earth's Energy Budget (ASCII Bar Graph)\n";
    cout << "---------------------------------------\n";
    for (const auto& c : components) {
        cout << left << setw(15) << c.name << " | ";
        printBar(c.value);
        cout << endl;
    }

    return 0;
}

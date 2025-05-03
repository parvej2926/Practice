
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, int> balloonColors;
    string color;

    // Simulate receiving balloons
    while (1) {
        cout << "Enter balloon color (or 'q' to stop): ";
        cin >> color;

        if (color == "q")
            break;
        balloonColors[color]++;
    }
    cout << "\nBalloon color counts:\n";
    for (auto pair : balloonColors) {
        cout << "Color: " << pair.first << ", Count: " << pair.second << endl;
    }

    return 0;
}

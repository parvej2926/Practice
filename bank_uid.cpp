#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> myMap = {{"A", 10}, {"B", 20}, {"C", 30}, {"D", 15}};
    map<string, int> myMap2 = {{"K", 10},{"B", 50},{"L", 30},{"D", 15}};

    for (auto it : myMap) {
        if(myMap2.find(it.first)!=myMap2.end()){
            cout << it.first << endl;
        }
    }
}

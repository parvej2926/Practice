#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str;
    ifstream f1("char_manipulation.txt");
    ofstream f2("char_manipulation_out.txt");

    if (!f1 || !f2) {
        cerr << "error opening file!" << endl;
        return 1;
    }

    while (getline(f1, str)) {
        for (char &it : str) {
            if (isalpha(it)) {
                if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u') {
                    string y;
                    char x;
                    cout << "Character: " << it << " — Do you want to replace it? (yes/no): ";
                    cin >> y;
                    if (y == "yes") {
                        cout << "What do you want to replace it with? ";
                        cin >> x;
                        f2 << x;
                    } else {
                        continue;
                    }
                } else {
                    f2 << it;
                }
            } else {
                string y;
                char x;
                cout << "Character: " << it << " — Do you want to replace it? (yes/no): ";
                cin >> y;
                if (y == "yes") {
                    cout << "What do you want to replace it with? ";
                    cin >> x;
                    f2 << x;
                } else {
                    continue;
                }
            }
        }
        f2 << '\n'; // Preserve newlines
    }

    f1.close();
    f2.close();
    return 0;
}

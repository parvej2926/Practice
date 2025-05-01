#include <iostream>
#include <sstream>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;

int main() {
    priority_queue<int> pq;
    FILE *f1 = fopen("A3.txt", "r");
    char ch[100];

    if (f1 == NULL) {
        cout << "Empty file!\n";
        return 1;
    }

    while (fgets(ch, sizeof(ch), f1)) {
        for (int i = 0; i < strlen(ch); i++) {
            if (ch[i] == ',') {
                ch[i] = ' ';
            }
        }

        stringstream ss(ch);
        int num;

        while (ss >> num) {
            pq.push(num);
        }

        cout << "highest\n";
        if (!pq.empty()) {
            cout << pq.top() << endl;
        }
        pq = priority_queue<int>();
    }

    fclose(f1);
    return 0;
}

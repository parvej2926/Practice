#include <list>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    list<string> p;
    list<string> q;
    list<string> n;
    list<string> c;

    string doc1 = "Data is the new oil of digital economy";
    string doc2 = "Data is new oil";

    stringstream a;
    a << doc1;
    stringstream b;
    b << doc2;
    string word;

    while (a >> word) {
        p.push_back(word);
    }

    while (b >> word) {
        q.push_back(word);
    }


    p.sort();
    q.sort();

    set_intersection(
        p.begin(), p.end(),
        q.begin(), q.end(),
        back_inserter(c)
    );

    n=p;
    n.sort();
    n.unique();

    cout << "Universal:  ";
    for (string s : n) {
        cout << s << " ";
    }
    cout << endl;
    cout << "Intersection:  ";
    for (string s : c) {
        cout << s << " ";
    }
    cout << endl;

    cout << "Similarity: " << (float)c.size() / n.size() << endl;

    return 0;
}

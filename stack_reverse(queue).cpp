#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void reverseQueue(queue<int>& q, int n) {
    stack<int> s;
    for (int i = 0; i < n; i++) {
        s.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++) {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverseQueue(q, 5);
    return 0;
}

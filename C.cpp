#include <iostream>
using namespace std;

class Geeks {
private:
    int private_var;
protected:
    int protected_var;
public:
    Geeks() {
        private_var = 10;
        protected_var = 20;
    }

    // Declaring FriendClass3 as a friend so it can access private/protected members
    friend class FriendClass3;
};

// Friend class accessing private and protected members
class FriendClass3 {
public:
    void accessPrivateVar(Geeks& g) {
        cout << g.private_var << endl;
        cout << g.protected_var << endl;
    }
};

int main() {
    Geeks geekObj;
    FriendClass3 fObj;
    fObj.accessPrivateVar(geekObj);  // Pass Geeks object, not FriendClass3
    return 0;
}

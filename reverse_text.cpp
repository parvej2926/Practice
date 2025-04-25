#include<iostream>
#include<sstream>
#include<stack>
using namespace std;


int main(){
    string str="Technical Interview Preparation";
    stack<string> s;

    stringstream ss(str);
    string word;
    while(ss>>word){
        s.push(word);
    }

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

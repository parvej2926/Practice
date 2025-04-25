#include<iostream>
#include<sstream>
#include<stack>
using namespace std;
int main(){
    string str = "azxxzy";
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        if(st.empty()){
                st.push(str[i]);
            }
        else{
            if(st.top() == str[i]){
                st.pop();
            }else{
                st.push(str[i]);
            }
        }
    }
    stack<char> st2;
    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty()){
        cout << st2.top();
        st2.pop();
    }
    cout << endl;
}

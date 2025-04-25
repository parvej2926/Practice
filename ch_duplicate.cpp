#include<iostream>
#include<sstream>
#include<stack>
using namespace std;
int main(){
    string str = "azxxzy";
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        if(!st.empty()){
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
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

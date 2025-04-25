#include <iostream>
#include <sstream>
#include <stack>
#include <map>
#include <cstring>

using namespace std;
int main(){
    stack<string>s;
    map<string, int> charCount;
    FILE *file = fopen("doc1.txt", "r");
    FILE *file2 = fopen("doc2.txt", "w");
    char buffer[100];
    string str;
    while(fgets(buffer, sizeof(buffer), file)!=NULL){
        for (int i=0; i<strlen(buffer); i++){
            if(buffer[i]=='.'){
                buffer[i]=i+1;
            }
        }
        str += buffer;
    }
    fclose(file);
    for (int i = 0; i < str.length(); i++) {
        string ch(1, str[i]);
        if (charCount.empty()) {
            charCount[ch] = 1;
        }
        else {
            if (charCount.find(ch) == charCount.end()) {
                charCount[ch] = 1;
            }
            else {
                charCount[ch]++;
            }
        }
    }


    for (auto it : charCount){
        cout << it.first << ": " << it.second << endl;
    }
    stringstream ss(buffer);
    string word;
    while(ss >> word){
        s.push(word);

    }
    cout << endl;
    cout << "Stack contents:" << endl;
    while(!s.empty()){
        cout << s.top() <<"  ";
        fprintf(file2, "%s", s.top().c_str());
        fprintf(file2, "  ");
        s.pop();
    }
    fclose(file2);
}

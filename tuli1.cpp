#include<iostream>
#include<fstream>
#include<sstream>
#include<queue>
#include<cstring>

using namespace std;
int main(){
    char ch[100];
    priority_queue<int>pq;
    ifstream f1("111.txt");

    if(!f1){
        cout<<"Empty file!";
        return 0;
    }

    while(f1.getline(ch,100)){
        for(int i=0;i<strlen(ch);i++){
            if(ch[i]==','){
                ch[i] = ' ';
            }
        }

      stringstream ss(ch);
      int num;
      while(ss>>num){
      pq.push(num);
      }
      cout<<pq.top()<<"   ";
      cout<<endl;
      pq=priority_queue<int>();

    }

}

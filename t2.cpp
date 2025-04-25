#include<iostream>
#include<map>
#include<sstream>
#include<string>

using namespace std;
int main(){
    map<string,int>m;
    string in;
    char ch;
    FILE *file;
    file=fopen("mapFile.txt","r");
    while((ch=fgetc(file))!=EOF){

        in+= ch;

    }
   fclose(file);

    stringstream ss(in);
    string word;
    while(ss>>word){
        if(m.empty()){
            m[word] = 1;
        }
        else{
            m[word]++;
        }
    }
    map<string,int>::iterator it;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

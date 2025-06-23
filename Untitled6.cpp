#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream f1("t.txt");
    ofstream f2("p.txt");

    if(!f1 || !f2){
        cerr<<"Error opening!";
    }
    string str;
    while(getline(f1,str)){
        for(int i=0;i<str.size();i++){
            cout<<"";
        }
    }

    f1.close();
    f2.close();
}

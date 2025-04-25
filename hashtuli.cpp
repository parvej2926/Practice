#include<iostream>
using namespace std;
int main(){
    const int table_size=7;
    int hash[table_size];

    for(int i=0;i<table_size;i++){
        hash[i]=-1;

    }
    int keys[]={76,93,40,47,10,55,11};
    for(int i=0;i<table_size;i++){
        int index=keys[i]% table_size;
        while(hash[index]!=-1){
            index=(index+1)%table_size;
        }
        hash[index]=keys[i];
    }
    for(int i=0;i<table_size;i++){
        if(hash[i]!=-1)
        cout<<i<<""<<hash[i]<<endl;
        else cout<<i<<" "<<"enpty"<<endl;

    }
    return 0;
}

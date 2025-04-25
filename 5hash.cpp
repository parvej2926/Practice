#include<iostream>
using namespace std;

int main(){
    int hashtable[7];
    int index;

    for(int i= 0; i<7; i++){
        hashtable[i] = -1;
    }
    int keys[]={76,93,40,47,10,55,11};

    for( int i = 0; i<7; i++){
        index = keys[i] % 7;

        while(hashtable[index] != -1){
            index = (index + 1) % 7;
        }
        hashtable[index] = keys[i];
    }
    for(int i = 0; i<7; i++){
        if(hashtable[i] != -1) cout<< i <<" "<< hashtable[i]<<"\n";
        else cout<< i <<" "<< "empty"<<"\n";
    }
    return 0;



}

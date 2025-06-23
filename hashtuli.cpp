#include<iostream>
using namespace std;
int main(){
    int hash[7];

    for(int i=0;i<7;i++){
        hash[i]=-1;

    }
    int keys[]={76,93,40,47,10,55,11};
    for(int i=0;i<7;i++){
        int index=keys[i]% 7;
        while(hash[index]!=-1){
            index=(index+1)%7;
        }
        hash[index]=keys[i];
    }int p=0;
    for(auto it : hash){
        cout<<p << "    "<< it << endl;
        p++;
    }
    return 0;
}

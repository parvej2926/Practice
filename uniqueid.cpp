#include<iostream>
#include <sstream>

using namespace std;

void checkid(string& id){
    char batch[10], dept[10], sec[10];
    batch[0]= id[0];
    batch[1]= id[1];
    batch[2]= '\0';
    dept[0]= id[4];
    dept[1]= id[5];
    dept[2]= '\0';
    sec[0]= id[6];
    sec[1]= '\0';


    cout<< "batch: " << batch << endl;
    cout<< "dept: " << dept << endl;
    cout<< "sec: " << sec << endl;
}

int main(){
    int id;
    printf("enter your id");
    cin>>id;

    stringstream ss;
    ss<<id;
    string idc = ss.str();

    if(idc.length()!=9){
        printf("invaild idc");
        return 0;
    }
    else{
        checkid(idc);
    }
}

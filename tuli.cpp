#include<iostream>
#include<cstring>
#include<cctype>
using  namespace std;

int is_strong(char *pass){

    int upper_count = 0;
    int lower_count = 0;
    int digit_count = 0;
    int special_count = 0;

    if(strlen(pass)<12) return -1;
    for(int i=0;i<strlen(pass);i++){
        if(!isupper(pass[i]))
            upper_count++;
        if(!islower(pass[i]))
            lower_count++;
        if(!isdigit(pass[i]))
            digit_count++;
        if(!strchr("),.;:<>(",pass[i]))
            special_count++;
    }

    if(upper_count==0 || lower_count==0 || digit_count==0 || special_count==0)
        return -1;

    return 1;

}

int main(){
    char pass[50];
    cout<<"Enter your password:";
    cin>>pass;

    cout<<is_strong(pass)<<endl;

   return 0;

}

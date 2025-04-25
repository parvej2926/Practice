#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char x[20];
    cout<<"input a binary \n";
    fgets(x, sizeof x, stdin);
    char y[20];
    cout<<"input a binary\n";
    fgets(y, sizeof y, stdin);
    int f01=0, f10=0,f00=0,f11=0;

    for(int i=0; i<strlen(x); i++){
        for(int j=0; j<strlen(y); j++){
            if(x[i]=='0' && y[j]=='1'){
                f01++;
            }
            else if(x[i]=='1' && y[j]=='0'){
                f10++;
            }
            else if(x[i]=='0' && y[j]=='0'){
                f00++;
            }
            else{
                f11++;
            }
        }
    }
    cout<<f00<<endl;
    cout<<f11<<endl;
    cout<<f10<<endl;
    cout<<f01<<endl;
    double SMC=(double)(f11+f00)/(f01+f10+f11+f00);
    cout<< SMC ;
    return 0;


}

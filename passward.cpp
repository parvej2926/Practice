#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int password(char *pass){
    int i;
    int length = strlen(pass);
    int ucount = 0, lcount = 0, ncount = 0, scount = 0;
    for(i= 0; i<=11; i++){
        if(isupper(pass[i])){
            ucount++;
        }
        else if(islower(pass[i])){
            lcount++;
        }
        else if (isdigit(pass[i])){
            ncount++;
        }
        else{
            scount++;
        }
    }
    cout<< ucount << "\n" << lcount << "\n" << ncount << "\n" << scount << "\n" << length << "\n";
    if(ucount==0 || lcount==0 || ncount==0 || scount==0){
        return 0;
    }
    if(length!=12)
    {
        return 0;
    }
    return 1;
}

int main(){
    char pass[13];
    printf("enter a strong password:  ");
    fgets(pass, sizeof pass , stdin);
    printf("%d", password(pass));
    return 0;
}

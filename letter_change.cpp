#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

int main (){
    FILE *file = fopen("string.txt","r");
    char buffer[100];
    while ((fgets(buffer, sizeof(buffer), file))!=NULL){
        for (int i=0; i<strlen(buffer); i++){
             char ch= buffer[i];
             if (isalpha(ch)){
                 char base= islower(ch) ? 'a' : 'A';
                 char updated= (ch-base+4)%26 +base;
                 cout << updated;
             }
             else{
                 cout << ch;
             }
        }
    }
}

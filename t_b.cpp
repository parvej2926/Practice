
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int max_book = 0;
    int max_num=0;
    char ch[100];
    FILE *f=fopen("string1.txt","r");

    if(f==NULL){
        cout<<"File is empty\n";
        return 1;
    }
    string max_course = " ";
    while(fgets(ch,sizeof(ch),f)){
        for(int i=0;i<=strlen(ch);i++){
            if(ch[i] == '-'){
                ch[i] = ' ';
            }
        }

        stringstream ss(ch);
        string name;
        int book;
        ss>>name>>book;

      if(book>max_num){
        max_num=book;
        max_course = name;


      }

    }

    cout<< max_course<<"-" << max_num << endl;



}

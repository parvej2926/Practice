#include<iostream>
#include<sstream>
#include<fstream>
#include<map>

using namespace std;

int main(){
    map<string,int>mp;
    map<string,int>mp2;
    int max_book=0;
    string max_course;
    string str;
    ifstream f1("booklist_in.txt");
    ifstream f2("bookprice_in.txt");
    ofstream f3("max_book_out.txt");
    ofstream f4("mul_price.txt");

    if(!f1 || !f2 || !f3 || !f4){
        cerr<<"Error opening file!";
        return 0;
    }

    while(getline(f1,str)){
        for(char &it:str){
            if(it=='-') it=' ';
        }

        stringstream ss(str);
        string course;
        int num;


        while(ss>>course>>num){
            mp[course] = num;
            if(num>max_book){
                max_book = num;
                max_course = course;

            }
        }
    }
   // cout << max_course<<"-"<<max_book<<endl;
    f3 <<  max_course<<"-"<<max_book;
/*
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
        */

    while(getline(f2,str)){
        /*
        CSE-100
        EEE-50
        BAN-1000
        ENG-0
        PHY-10
        CHEM-1
        */

        for(char &it:str){
            if(it=='-') it=' ';
        }

        stringstream ss(str); //CSE 100
        string course;
        int num;


        while(ss>>course>>num){ // course= CSE  num= 100
            mp[course] *= num;

        }
    }
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
}

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    char id[9];
    cout<<"Enter the id:";
    cin>>id;

    int batch = (id[0] - '0') * 10 + (id[1] - '0');


       cout << batch;
       /*
      if(i>2 && i<5){
        switch (id[i])
        {
        case 01:"MPE";
            break;

        case 02:"EEE";
            break;

        case 03:"WEI";
            break;

        case 04:"CSEI";
            break;

         case 05:"CSE";
            break;

        case 06:"BTM";
            break;

        }
        cout<<"Dpertment:"<<id[i];
      }

       if(i==6){
        cout<<"Section:"<<id[i]<<endl;
       }
    }
*/

}

#include<stdio.h>
void pln(char *str,int x,int y){
    for(int i=0;i!='\0';i++){
        switch(str[i]){
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
        }
    }
    printf("Final position: (%d, %d)\n", x, y);

}
int main(){
int x,y;
printf("Enter your position");
scanf("%d %d",&x,&y);

char str[100];
getchar();
printf("Enter your direction");
scanf("%s",str);
pln(str,x,y);
}

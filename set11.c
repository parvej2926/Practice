#include <stdio.h>

void find_Location(char *str, int x, int y){
    for(int i = 0; str[i] != '\0'; i++){
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
    int x, y;
    printf("Enter the initial position (x, y): ");
    scanf("%d %d", &x, &y);

    char str[100];
    printf("Enter the sequence of moves(R/L/U/D): ");
    scanf("%s", str);
    find_Location(str, x, y);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int validate(char sms[]){
    char cu[10], hsc_board[10], hsc_year_str[10],hsc_roll[10],ssc_board[10], ssc_year_str[10],ssc_roll[10];

    int count = sscanf(sms, "%s %s %s %s %s %s %s", cu, hsc_board, hsc_year_str, hsc_roll, ssc_board, ssc_year_str, ssc_roll);

    if(count!=7) return 0;
    if(strcmp(cu, "CU") != 0) return 0;
    if (strlen(hsc_board) != 3 || strlen(ssc_board) != 3) return 0;
    for (int i = 0; i < 3; i++) {
        if (!isupper(hsc_board[i]) || !isupper(ssc_board[i]))
            return 0;
    }
    int hsc_year = atoi(hsc_year_str);
    int ssc_year = atoi(ssc_year_str);
    if (hsc_year < ssc_year + 2)
        return 0;

    return 1;


}

int main() {
    char sms[100];
    printf("string : ");
    fgets(sms, sizeof sms, stdin);
    printf("%d", validate(sms));
    return 0;
}

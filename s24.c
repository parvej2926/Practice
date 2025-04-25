#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char arr[100];
    char max[100];
    int max_books = 0;
    FILE *file = fopen("course.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    while(fgets(arr, sizeof(arr), file)!=NULL){
        arr[strcspn(arr, "\n")] = '\0';
        char *ch = strtok(arr,"-");
        char *books_str = strtok(NULL,"\n");
        if(ch && books_str){
          int books = atoi(books_str);
          if(books>max_books){
              max_books = books;
              strcpy(max, ch);
          }
        }
    }
    fclose(file);
    if(max_books>0){
        FILE *file1 = fopen("max_books.txt", "w");
        fprintf(file1, "%s %d", max, max_books);
        fclose(file1);
    }
    return 0;
}

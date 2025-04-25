#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file = fopen("population.txt", "r");

    char population[100];
    char highest_population[100];
    int max_population = 0;

    while(fgets(population, sizeof(population),file)!= NULL){
    population[strcspn(population,"\n")]= '\0';
    char *CITY = strtok(population,"-");
    char *POPULATION = strtok(NULL,"-");
    if(CITY && POPULATION){
        int population = atoi(POPULATION);
        if(population > max_population){
            max_population = population;
            strcpy(highest_population, CITY);
        }
    }
    }
    fclose(file);
    if(max_population > 0){
        printf("The city with the highest population is %s with %d people.\n", highest_population, max_population);
        FILE *output_file = fopen("output.txt", "w");
        fprintf(output_file, "The city with the highest population is %s with %d people.\n", highest_population, max_population);
        fclose(output_file);
    } else {
        printf("No data available.\n");
    }

}

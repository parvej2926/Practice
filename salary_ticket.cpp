#include <iostream>
#include <map>
#include <set>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main() {
    map<string, int> salary_ticket;
    set<string> travelers;
    FILE *file = fopen("salary_ticket.txt", "r");
    FILE *file1 = fopen("travelers.txt", "r");
    FILE *file2 = fopen("salary_ticket_price.txt", "w");
    if (file == NULL) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        for(int i = 0; i < strlen(buffer); i++) {
            if (buffer[i] == ' ') {
                buffer[i] = '\n';
            }
            if(buffer[i] == ':') {
                buffer[i] = ' ';
            }
        }
        string line(buffer);
        stringstream ss(line);
        string name;
        int salary;
        ss >> name >> salary;
        salary_ticket[name] = salary;
    }
    cout << "Salary Ticket\n";
    for(auto it : salary_ticket) {
        cout << it.first << "  " << it.second << endl;
    }
    while(fgets(buffer, sizeof(buffer), file1)){
        string line(buffer);
        stringstream ss(line);
        string name;
        ss >> name;
        travelers.insert(name);
    }
    cout << "Travelers\n";
    for(auto it : travelers) {
        cout << it << endl;
    }
    for(auto it : travelers) {
        float price = salary_ticket[it] * 0.1;
        fprintf(file2, "%s %.2f\n", it.c_str(), price);
    }

    fclose(file);
    return 0;
}

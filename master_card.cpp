#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    FILE *oldfile= fopen("oldfile.txt","r");
    FILE *transfile= fopen("transfile.txt","r");
    FILE *newfile= fopen("newfile.txt","w");
    FILE *logfile= fopen("logfile.txt","w");

    char buffer[100];

    map <int, double> old_balance;
    map <int, double> trans_balance;
    map <int, double> new_balance;

    int id;
    double amount;

    while(fgets(buffer, sizeof(buffer), oldfile)) {
        string line(buffer);
        stringstream ss(line);
        ss >> id >> amount;
        old_balance[id] = amount;
    }

    while(fgets(buffer, sizeof(buffer), transfile)) {
        stringstream ss(buffer);
        ss >> id >> amount;
        trans_balance[id] = amount;
    }

    for(auto it : old_balance) {

        cout << "Processing account " << it.first << " " << it.second << endl;

        id = it.first;
        amount = it.second;

        double n_balance = amount + trans_balance[id];
        new_balance[id] = n_balance;

        cout << "New balance for account " << id << "  " << n_balance << endl;
        fprintf(newfile, "%d %f\n", id, n_balance);

        cout << "Transaction details for account " << id << "  " << amount << "  " << trans_balance[id] << "  " << n_balance << endl;
        fprintf(logfile, "%d %f %f %f ", id, amount, trans_balance[id], n_balance);

    }

    fclose(oldfile);
    fclose(transfile);
    fclose(newfile);
    fclose(logfile);

    return 0;
}

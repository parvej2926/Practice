#include<iostream>
#include<map>

using namespace std;

int main() {
    FILE *mFile, *tFile, *newMFile, *logFile;
    mFile = fopen("oldmast.txt", "r");
    tFile = fopen("trans.txt", "r");
    newMFile = fopen("newmast2.txt", "w");
    logFile = fopen("lof2.txt", "w");

    if (!mFile || !tFile || !newMFile || !logFile) {
        cerr << "Error opening files." << endl;   //console error
        return 1;
    }

    map<int, double> m; // main data
    map<int, double> t; // transaction data

    int accNo;
    double amount;

    // Read from master file
    while (fscanf(mFile, "%d %lf", &accNo, &amount) == 2) {
        m[accNo] = amount;
    }

    // Read from transaction file
    while (fscanf(tFile, "%d %lf", &accNo, &amount) == 2) {
        t[accNo] += amount;
    }

    // Process the updates and write to new master file
    for (auto& [accNo, balance] : m) {
        if (t.count(accNo)) {
            balance += t[accNo];
            t.erase(accNo);
        }
        fprintf(newMFile, "%d %.2f\n", accNo, balance);
    }

    // Write unmatched transactions to log file
    for (auto& [accNo, _] : t) {
        fprintf(logFile, "Unmatched transaction for A/C No. %d\n", accNo);
    }

    fclose(mFile);
    fclose(tFile);
    fclose(newMFile);
    fclose(logFile);

    cout << "Processing complete. See 'newmast2.txt' and 'lof2.txt'." << endl;
    return 0;
}

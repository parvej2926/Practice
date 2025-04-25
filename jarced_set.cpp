#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main() {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
    FILE *file3 = fopen("file3.txt", "w");

    if (!file1 || !file2 || !file3) {
            cerr << "Error opening one of the files." << endl;
            return 1;
        }

    set<string> doc1;
    set<string> doc2;

    char buffer[100];
    while(fgets(buffer, sizeof buffer, file1)){
        stringstream ss(buffer);
        string word;
        while(ss>>word){
            doc1.insert(word);
        }

    }
    while(fgets(buffer, sizeof buffer, file2)){
        stringstream ss(buffer);
        string word;
        while(ss>>word){
            doc2.insert(word);
        }

    }
    for(auto it : doc1){
        cout << it << "  ";
    }
    cout << endl;
    for(auto it : doc2){
        cout << it << "  ";
    }
    cout << endl;

    doc1.insert(doc2.begin(), doc2.end());

    int a= doc2.size();
    int b= doc1.size();

    cout << a << " " << b << endl;

    float p = (float)a/b;

    fprintf(file3, "%f", p);

    cout << "jerced similarity calculation: " << endl;
    cout << p << endl;

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;


}

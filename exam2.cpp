#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool isNumber(const string& s) {
    return all_of(s.begin(), s.end(), ::isdigit);
}

bool isWord(const string& s) {
    return all_of(s.begin(), s.end(), ::isalpha);
}

void classify(const string& token, vector<string>& words, vector<string>& numbers, vector<string>& specials) {
    if (isNumber(token))
        numbers.push_back(token);
    else if (isWord(token))
        words.push_back(token);
    else
        specials.push_back(token);
}

void writeToFile(const string& filename, const vector<string>& data) {
    ofstream file(filename);
    for (const auto& item : data)
        file << item << " ";
    file.close();
}

int main() {
    ifstream infile("text.txt");
    string token;
    vector<string> words, numbers, specials;

    while (infile >> token) {
        classify(token, words, numbers, specials);
    }
    infile.close();

    writeToFile("file1.txt", words);
    writeToFile("file2.txt", numbers);
    writeToFile("file3.txt", specials);

    return 0;
}

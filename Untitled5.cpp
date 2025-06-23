#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// Helper to trim punctuation and spaces from a word
string cleanWord(const string& w) {
    string word = w;
    // Remove punctuation and spaces
    word.erase(remove_if(word.begin(), word.end(), [](char c){ return ispunct(c) || c == ' '; }), word.end());
    // Convert to lowercase for uniformity
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    return word;
}

int main() {
    ifstream paragraphFile("file.txt");
    ifstream synonymFile("file1.txt");

    if (!paragraphFile || !synonymFile) {
        cerr << "Error opening input files.\n";
        return 1;
    }

    // Read entire paragraph into one string
    string paragraph, line;
    while (getline(paragraphFile, line)) {
        paragraph += line + " ";
    }

    // Map to hold synonym word -> group string
    map<string, string> synonymMap;
    while (getline(synonymFile, line)) {
        stringstream ss(line);
        vector<string> groupWords;
        string w;
        while (ss >> w) {
            string cw = cleanWord(w);
            if (!cw.empty()) {
                groupWords.push_back(cw);
            }
        }
        if (!groupWords.empty()) {
            // Join group words as one string (space separated)
            string groupStr;
            for (const string& gw : groupWords) {
                groupStr += gw + " ";
            }
            // Map each synonym to the full group string
            for (const string& gw : groupWords) {
                synonymMap[gw] = groupStr;
            }
        }
    }

    // Count occurrences of words in paragraph only if they appear in synonym groups
    map<string, int> wordCount;

    stringstream ss(paragraph);
    string token;
    while (ss >> token) {
        string cw = cleanWord(token);
        if (!cw.empty() && synonymMap.count(cw)) {
            // Count only the original word itself, not synonyms combined
            wordCount[cw]++;
        }
    }

    // Print matched words and their groups
    cout << "Matched Words and Their Synonym Groups:\n";
    for (const auto& [word, count] : wordCount) {
        cout << "Word: " << word << "\n";
        cout << "Count: " << count << "\n";
        cout << "Group: " << synonymMap[word] << "\n";
    }

    // Print top 3 most frequent matched words
    vector<pair<string,int>> freqVec(wordCount.begin(), wordCount.end());
    sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b){
        return b.second < a.second;  // descending order by count
    });

    cout << "\nTop 3 Most Frequent Matched Words:\n";
    for (size_t i = 0; i < freqVec.size() && i < 3; i++) {
        cout << freqVec[i].first << ": " << freqVec[i].second << "\n";
    }

    return 0;
}

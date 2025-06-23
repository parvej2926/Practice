#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void countSynonymsInParagraph(const string& paragraph, const map<string, vector<string>>& synonymsMap) {
    map<string, int> wordCount;

    stringstream ss(paragraph);
    string word;

    while (ss >> word) {
        for (auto entry : synonymsMap) {
            if (find(entry.second.begin(), entry.second.end(), word) != entry.second.end()) {
                wordCount[entry.first]++;  // Count the occurrence of the synonym group word
                break;  // Move to the next word in the paragraph
            }
        }
    }

    // Display the results
    for (const auto& entry : wordCount) {
        cout << "Synonym Group: " << entry.first << " | Count: " << entry.second << "\n";
    }
}

int main() {
    // Define the synonym map (word -> list of synonyms)
    map<string, vector<string>> synonymsMap = {
        {"happy", {"happy", "cheerful", "joyful", "content"}},
        {"cheerful", {"happy", "cheerful", "joyful", "content"}},
        {"content", {"happy", "cheerful", "joyful", "content"}},
        {"joyful", {"happy", "cheerful", "joyful", "content"}},
        {"sad", {"sad", "unhappy", "downcast", "sorrowful"}},
        {"unhappy", {"sad", "unhappy", "downcast", "sorrowful"}},
        {"angry", {"angry", "irritated", "furious", "mad"}}
    };

    // Define the paragraph
    string paragraph = "I am so happy today. My friend is angry but I am cheerful. The cheerful weather makes me feel happy.";

    countSynonymsInParagraph(paragraph, synonymsMap);

    return 0;
}

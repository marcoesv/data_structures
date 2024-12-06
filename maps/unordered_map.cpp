#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Create an unordered_map to store the frequency of words
    std::unordered_map<std::string, int> wordCount;

    // Sample text
    std::string text = "hello my name is marco marco is my name and i am a programmer marco marco marco marco";

    // Split the text into words and count their frequency
    std::string word;
    for (char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                wordCount[word]++;
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        wordCount[word]++;
    }

    // Display the word frequencies
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
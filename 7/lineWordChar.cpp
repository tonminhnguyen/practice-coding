//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

int main() {
    std::ifstream myfile("example.txt");
    if (!myfile.is_open()) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1;
    }

    int lineCount = 0, wordCount = 0, charCount = 0;
    std::string line;

    while (std::getline(myfile, line)) {
        lineCount++;
        std::istringstream stream(line);
        std::string word;
        while (stream >> word) {
            wordCount++;
        }
        charCount += line.length();
    }

    myfile.close();

    std::cout << "Number of lines: " << lineCount << std::endl;
    std::cout << "Number of words: " << wordCount << std::endl;
    std::cout << "Number of characters: " << charCount << std::endl;

    return 0;
}

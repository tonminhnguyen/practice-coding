//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
#include <fstream>

int main() {
    std::ofstream myfile;
    myfile.open("example.txt");
    std::cout << myfile.is_open() << std::endl;
    myfile << "Writing this to a file.\n";
    myfile.close();

    std::ifstream myfileRead("example.txt");
    std::string fileContent;
    if (myfileRead.is_open()) {
        while (std::getline(myfileRead, fileContent)) {
            std::cout << fileContent << std::endl;
        }
        myfileRead.close();
    } else {
        std::cerr << "Unable to open the file for reading." << std::endl;
    }
    return 0;
}

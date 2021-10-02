#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string path;
    std::cout << "Input the file path: ";
    std::cin >> path;
    file.open(path);
    std::string checkLine;
    std::getline(file, checkLine);
    int i = checkLine[0];
    checkLine = checkLine.substr(1, 7);
    if (i == -119 && checkLine == "PNG") std::cout << "It's a PNG";
    else std::cout << "It's not a PNG";
    return 0;
}

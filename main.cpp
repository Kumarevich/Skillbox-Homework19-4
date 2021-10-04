#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file;
    std::string path;
    std::cout << "Input the file path: ";
    std::cin >> path;
    std::string ext = path.substr(path.find("png"));
    if (ext != "png") {
        std::cout << "It's not a PNG!";
        return 1;
    }

    file.open(path, std::ios::binary);
    if (!file.is_open()) {
        std::cout << "File open error!";
        return 666;
    }

    char buffer[4];
    file.read(buffer, 4);
    if (buffer[0] == -119 && buffer[1] == 'P' && buffer[2] == 'N' && buffer[3] == 'G') std::cout << "It's a PNG";
    else std::cout << "It's not a PNG";
    return 0;
}

#include "../include/PrintLogo.h"

PrintLogo::PrintLogo(const std::string& p1) : path1(p1){}

void PrintLogo::printFromFile(const std::string& path){
    std::ifstream file(path);
    if (!file){
        std::cerr << "Error: Unable to open file " << path << std::endl;
    }
    std::string line;
    while (std::getline(file, line)){
        std::cout << line << std::endl;
    }
    file.close();
}

void PrintLogo::printLogo1(){
    printFromFile(path1);
}

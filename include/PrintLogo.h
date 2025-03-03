#ifndef PRINTLOGO_H
#define PRINTLOGO_H

#include <iostream>
#include <fstream>
#include <string>

class PrintLogo{
private:
    std::string path1;
    void printFromFile(const std::string& path);

public:
    PrintLogo(const std::string& p1);
    void printLogo1();
};

#endif // PRINTLOGO_H
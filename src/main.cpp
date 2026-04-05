// main orchestra

#include <iostream>
#include "../include/parser.h"
#include "../include/executor.h"

int main() {
    char input[100];

    std::cout << "Enter command: ";
    std::cin.getline(input, 100);

    ParsedCMD cmd = parseCMD(input);

    int result = executeParsed(cmd);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
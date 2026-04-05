#include "../include/commands.h"
// here we will define what each command does
#include <iostream>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

// int div(int a, int b){
//     return a / b;
// }

// now lets define the commandTable 

cmd cmdTable[] = {
    {"add", add},
    {"sub", sub},
    {"mult", mult},
    // {"div", div},
    {nullptr, nullptr}  // sentinel (end marker)

};

// int main(){
//     std::cout << cmdTable[0].func(3, 4);
// }
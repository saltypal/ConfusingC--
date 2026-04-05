// contains tokenization logic

#include <cstring>
#include <cstdlib>
#include "../include/parser.h"

ParsedCMD parseCMD(char* input) {
    ParsedCMD cmd; // empty one

    // Tokenize input
    char* token = strtok(input, " "); 
    /*
    strtok() is a C library function (<string.h>) used to split a
    string into smaller parts (tokens) based on 
    specified delimiter characters. 


    It modifies the original string by replacing delimiters 
    with null characters (\0) 
    
    turns add 3 4 into add\0 3\0 4\0
    */
    
    // First token = command name
    cmd.name = token;

    int i = 0; // the number of arguments

    // Remaining tokens = arguments
    while ((token = strtok(nullptr, " ")) != nullptr && i < 2) {
        cmd.args[i] = atoi(token);
        /*
        atoi() is a C library function (found in <stdlib.h>) 
        used to convert a string representing a number into an integer.
         Its name stands for "ASCII to Integer

         atoi("3") → 3 
        */
        i++;
    }

    cmd.argCount = i;

    return cmd;
}

/*
str(nullptr, " ")

thsi is a little loose and brain rot

strtok(nullptr, " ") meaning

strtok(nullptr, " ") is used to continue tokenizing 
the same string that was passed in a previous call to strtok. 

Passing a null pointer as the first argument
tells the function to resume searching from the 
internal "save pointer" where it left off

Because it relies on a single internal static pointer, 
strtok is not "thread-safe". its shit with multi threading
If two threads call it at the same time on 
different strings, they will interfere with each other*/
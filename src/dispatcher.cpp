#include <cstring>      // for strcmp
#include "../include/dispatcher.h"

#include "../include/commands.h"

/*
SO THIS FUCNTION will take input of the name, input values 
then it will iterate tthruogh the table and get the value
*/

int dispatch(const char* name, int a, int b) {

    for (int i = 0; i < MAX_CMD; i++) {

        // Stop if end of table reached
        if (cmdTable[i].name == nullptr) {
            break;
        }

        // Compare input with command name
        if (strcmp(name, cmdTable[i].name) == 0) {

            // Call function via pointer
            return cmdTable[i].func(a, b);
        }
    }

    return -1; // command not found
}
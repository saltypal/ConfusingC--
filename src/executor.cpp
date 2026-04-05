// execution bridge

#include "../include/executor.h"
#include "../include/dispatcher.h"
#include "../include/commands.h"

int executeParsed(const ParsedCMD& cmd) {

    if (cmd.argCount == MAX_ARG) {
        return dispatch(cmd.name, cmd.args[0], cmd.args[1]);
        // i send all this to the dispatcher. 
        // dispatcher will take and compare the name with the table and then execute the function residing

    }

    return -1;
}
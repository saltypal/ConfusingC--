// this is a header file only for parser functions interface

/*
here we dine a struct which breaks down th e input into name, args and number of args

*/

#ifndef PARSER_H
#define PARSER_H

struct ParsedCMD{
    const char* name;
    int args[2]; // only 2 args we need
    int argCount;
};

ParsedCMD parseCMD(char* input); 

/*
here we use char* because we are giving the point where the the string starts
(fromt he commands also we are giving name pointer only)
*/

#endif
// Take a command name → find matching function → execute it
#ifndef DISPATCHER_H
#define DISPATCHER_H

// Takes command name + args, returns result
int dispatch(const char* name, int a, int b);

#endif
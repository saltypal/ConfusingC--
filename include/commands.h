// this is a header file only for cmds functions interface: defines what operations exist and how they look



/*
things to implement here

v need to map different comamnds and their roles

so we will make a struct, that has the name of the function and the function

then we will make a table out of it by creating an array out of it

*/

#ifndef COMMANDS_H
#define COMMANDS_H

// Max cmds supported
#define MAX_CMD 4 // we have add sub mult and null
#define MAX_ARG 2

// Function pointer type
typedef int (*cmd_fn)(int, int); 
/*
typedef is a keyword used to create an alias for an existing data type
i am not making a nre datatype by i am makign the funciton a shorter name

so now everytime i do not have to make it like for different command it is add or sub tract and like define everytime

instead in the struct, i can tell cmd_fn is something which takes 2 numbers and returns a number.

it will be like, cmd_fn f = add;

cmd_fn is a pointer to a function that:
takes two int arguments
returns an int

if it was just int *cmd_fn then it would be like function is returning a pointer to int
*/

// cmd structure

struct cmd {
    const char* name; // this means name is a pointer with location of where the variable is
    // we can use string but we wanna learn how to use pointers
    /*
    char* name: This is just an address in memory. If you use it to point to a string litera
    It's a low-level "pointer" telling the computer where data starts in memory.
    */
    cmd_fn func;
};


// Extern cmd table (defined in .cpp)
extern cmd cmdTable[];

/*
So because of doing this, in cmd struct, each one has a name and it is associated with some fucntion which does activity.

and then since we have multiple commands, we will make an array of it and declare it globally for all

char is almost always 1 byte. In the ASCII standard, every letter (A, B, C, etc.) fits perfectly into exactly 1 byte.
int is usually 4 bytes.
If you used an int* to store the word "CAT":
An int* would grab 4 bytes at once. It would try to read "CAT" plus whatever random garbage is in the 4th byte as a single, giant number.
A char* reads exactly 1 byte, sees 'C', moves 1 byte over, sees 'A', and so on. It "fits" the data.

*/


// Function declarations
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
// int div(int a, int b);

#endif
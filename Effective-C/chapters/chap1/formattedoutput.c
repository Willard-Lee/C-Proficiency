// The puts funciton is a simple way to write a string to stdout.
// But to print arguements other than strings, you'll neeed to use
// the printf function. It takes a format string that defines how
// the output the is formatted, followed by a variable number of arguments
#include <stdio.h>
#include <stdlib.h>

int main(){
    if(printf("%s\n", " Hello, World!") == EOF){
    return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

// %s is a conversion specification that instructs the printf function to read
// the second argument ( a string literal)
// \n is an alphabetci escape sequence used to reprsent non-graphic characters
// and tells the funciton to include a new line


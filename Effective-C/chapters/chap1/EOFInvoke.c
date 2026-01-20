#include <stdio.h> // declares several I/O Functions 
#include <stdlib.h> // declares several general utility types and function also several macros
// in this case stdio.h is for the "puts" function called by the main
// and for the stdlib to access the definition of EXIT_SUCCESS macro

// first test code
//int main(){
//    puts("Hello, World!");
//    return EXIT_SUCCESS;  
//}

// Once your program has complete, you'll want to exit
// return statement will exit main and return an integer value to host or invocation script
// EXIT_SUCCESS is an object like-macro can be defined as 
// #define EXIT_SUCCESS 0
// any occurence is of EXIT_SUCCESS is replaced by 0 
  
// "puts" functions returns the value of macro EOF (negative integer)
// if a write error occurs, it returns a non negative integer value
// Can be improved by using if "puts" function fails and return EOF

int main(){
    if(puts("Hello, World!") == EOF){
        return EXIT_FAILURE;
        // code here never executes
    }
    return EXIT_SUCCESS;
    // code here never executes
}

// This revised version checks the puts call return value EOF
// IF function returns EOF, then return of EXIT_FAILURE macro (non zero value) and vice versa.

// include pre-processor directive
#include "./headers/Pointers.h"

/*
* each variable and function gets stored in memory (in the stack).
* the location in memory to where it's stored is referred to as
* its address. unlike other variables that store values of a 
* certain type (like int, float, etc.), a pointer is a variable
* that stores an address. an integer variable stores an integer
* value. an integer pinter stores the address of an integer 
* variable. we can have pointers to characters, integers, doubles, etc.
* we can have pointers to functions. pointers get stored
* in the heap.
*/

/* this funtion prints the address of itself */
void printAddress(void){
    // the %p format specifier used in the format string is
    // a placeholder for an address
    printf("The printAddress function is stored at %p\n", printAddress);
}

/* this function returns the addres of the global variable i */
int * getAddress(void){

    // declare a pointer to an integer
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of global variable i and store
    // it in pointer
    // must use the & when accessing an address of a variable
    // the start is not needed when storing an address in a pointer
    ptr = &i;

    // return pointer
    // the star is not needed when using an address in a pointer
    return (ptr);
}

/* this function returns the value stored at the address of the 
* global variable i */
int getDataAtAddress(void){
    // declare a pointer to an integer
    // the star is needed when declaring a pointer
    int *ptr;

    // get the address of global variable i and store
    // it in pointer
    // must use the & when accessing an address of a variable
    // the start is not needed when storing an address in a pointer
    ptr = &i;

    // return the value stored at the pointer
    // the star is needed when accessing a value at an address in a pointer
    return (*ptr);
}
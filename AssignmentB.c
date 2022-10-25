// include pre-processor directive
#include <stdio.h>
#include <string.h>

/* write function for question 1 */
void genFactorial(){
    int n, fact=1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (n=1; n <= number; n++){
        fact = fact * n;
    }
    printf("Factorial of %d is: %d", number, fact);
}

/* write function for question 2 */
/*
void genFactorialReference(int, int*);
int main(){
    int fact, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    genFactorialReference(number, &fact);
    printf("The factorial of %d is : %d", number, fact);
}
*/

void genFactorialReference(int n, int *fact){
    int i;
    *fact = 1;
    for (i = 1; i <= n; i++){
        *fact = *fact *i;
    }
}

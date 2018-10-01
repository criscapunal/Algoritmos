#include <stdio.h>

xxxxx fibonacci(xxxxxx n) {

    if (n <= 1) 
        return 1;

    xxxxx fib = 1;
    xxxxx prevFib = 1;

    for (xxxxx i = 2; i < n; i++) {

        xxxxx temp = fib;
        fib += prevFib;
        prevFib = temp;

    }

    return fib;

}


void main () {
    
    // signed char          127
    // short int            32767
    // int                  32767
    // long int             2147483647
    // long long int        9223372036854775807

    
}

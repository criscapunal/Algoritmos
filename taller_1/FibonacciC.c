#include <stdio.h>

/*
    signed char          127                     overflow fibonacci(12)
    short int            32767                   overflow fibonacci(24)
    int                  32767                   overflow fibonacci(24)
    long int             2147483647              overflow fibonacci(47)
    long long int        9223372036854775807     overflow fibonacci(93)
  
    Reemplaza xxxxx por alguno de los anteriores tipos de datos.
*/

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

    
}

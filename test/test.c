#include "mylib.h"
#include <stdio.h>

#define myassert(x)                                                                                \
    do {                                                                                           \
        if (!(x)) {                                                                                \
            puts("Failed: " #x);                                                                   \
            return 1;                                                                              \
        }                                                                                          \
    } while (0)

int main(void) {
    int a = 10;
    int b = 4;
    int sum = mylib_sum(a, b);
    int product = mylib_multiply(a, b);
    int remainder;
    int quotient = mylib_divide(a, b, &remainder);

    myassert(sum == 14);
    myassert(product == 40);
    myassert(quotient == 2);
    myassert(remainder == 2);

    puts("All tests passed!");
    return 0;
}

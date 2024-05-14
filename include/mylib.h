#ifndef MYLIB_H

/**
 * Sums two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of a and b.
 */
int mylib_sum(int a, int b);

/**
 * Multiplies two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 * @return Product of a and b.
 */
int mylib_multiply(int a, int b);

/**
 * Divides two integers.
 *
 * @param dividend Dividend.
 * @param divisor Divisor.
 * @param[out] remainder Remainder.
 * @return Quotient.
 */
int mylib_divide(int dividend, int divisor, int *remainder);

#endif // MYLIB_H

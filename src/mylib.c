int mylib_sum(int a, int b) {
    return a + b;
}

int mylib_multiply(int a, int b) {
    return a * b;
}

int mylib_divide(int dividend, int divisor, int *remainder) {
    if (remainder) *remainder = dividend % divisor;
    return dividend / divisor;
}

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0)
        n /= 3;          // divide out every factor of 3
    return n == 1;       // a power of three ends at exactly 1
}
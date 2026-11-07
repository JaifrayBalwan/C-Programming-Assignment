int reverse(int x) {
    long long rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    // if the result doesn't fit in a 32-bit int, return 0
    if (rev > 2147483647LL || rev < -2147483648LL)
        return 0;
    return (int)rev;
}
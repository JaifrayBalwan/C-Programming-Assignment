int smallestEvenMultiple(int n) {
    if (n % 2 == 0) return n;   // already even, so n is a multiple of both 2 and n
    return n * 2;               // odd: the smallest common multiple is 2n
}
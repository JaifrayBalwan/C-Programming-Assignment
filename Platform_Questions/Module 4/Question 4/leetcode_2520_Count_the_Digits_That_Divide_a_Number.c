int countDigits(int num) {
    int temp = num, count = 0;
    while (temp > 0) {
        int d = temp % 10;
        if (num % d == 0)   // the problem guarantees num has no 0 digit
            count++;
        temp /= 10;
    }
    return count;
}
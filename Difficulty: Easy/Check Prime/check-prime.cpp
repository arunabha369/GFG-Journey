bool prime(int n) {

    if (n <= 1) return false; // 1 and below are not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;     // divisible → not prime
    }

    return true;              // no divisors → prime
}

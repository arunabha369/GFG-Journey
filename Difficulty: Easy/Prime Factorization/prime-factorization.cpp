void printPrimeFactorization(int n) {

    // Print all 2s
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // Check odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is still greater than 1, it's a prime factor
    if (n > 1) {
        cout << n << " ";
    }
}

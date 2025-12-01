class Solution {
  public:
    string isPrime(int n) {

        // 1 is not a prime number
        if (n == 1) return "No";

        // Check divisibility from 2 to sqrt(n)
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return "No";   // divisible → not prime
            }
        }

        return "Yes";  // No divisor found → prime
    }
};

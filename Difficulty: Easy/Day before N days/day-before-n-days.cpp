int nthDay(int d, int n) {
    // To handle large n and avoid negative modulo
    int ans = (d - (n % 7) + 7) % 7;
    return ans;
}

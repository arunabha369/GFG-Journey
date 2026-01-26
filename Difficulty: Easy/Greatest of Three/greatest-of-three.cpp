#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int greatest = a;

    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;

    cout << greatest;
    return 0;
}

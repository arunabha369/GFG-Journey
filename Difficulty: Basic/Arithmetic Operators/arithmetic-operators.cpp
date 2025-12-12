#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int p = x + y;
    int q = x - y;
    int r = x * y;
    int s = x / y;
    int t = x % y;

    cout << p << " " << q << " " << r << " " << s << " " << t;

    return 0;
}

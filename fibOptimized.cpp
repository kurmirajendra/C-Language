#include <iostream>
using namespace std;

int fibOptimized(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 10;
    cout << "\nF(" << n << ") = " << fibOptimized(n);

    cout << "\nFibonacci series till " << n << " : ";
    for (int i = 0; i <= n; i++) {
        cout << "\n" << fibOptimized(i);
    }

    return 0;
}


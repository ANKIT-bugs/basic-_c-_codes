#include <iostream>
using namespace std;

int main() {
    int n, n1 = 0, n2 = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << n1 << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    return 0;
}
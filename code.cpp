#include <iostream>
using namespace std;

int main() {
    int n = 10; // Number of Fibonacci numbers to print
    int a = 0, b = 1;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}

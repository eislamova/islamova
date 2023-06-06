#include <iostream>
using namespace std;

int Fibonaccir(int n) {
    if (n <= 1)
        return n;
    return Fibonaccir(n - 1) + Fibonaccir(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = Fibonaccir(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}

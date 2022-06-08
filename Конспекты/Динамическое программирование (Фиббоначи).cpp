#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {


    int n; cin >> n;
    vector <int> fibs(n+1, 1);

    for (int i = 2; i <= n; i++) {
        fibs[i] = fibs[i-1] + fibs[i-2];
    }

    cout << fibs[n];

    return 0;
}

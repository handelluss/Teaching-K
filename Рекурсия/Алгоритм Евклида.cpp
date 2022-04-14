#include <iostream>
using namespace std;

// Если a > b, то НОД(a, b) = НОД(a-b, b)
// Следствие:
// Если a > b, то НОД(a, b) = НОД(a % b, b)


// greatest common divisor
int gcd(int a, int b) {
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int main(){
    cout << gcd(720, 50);
    return 0;
}

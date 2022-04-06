#include <iostream>
using namespace std;

int findFactorial(int n) {
    if (n == 1)
        return 1;
    else
        return findFactorial(n - 1) * n;


}

int main()
{
    int n; cin >> n;

    /* Первый способ
    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    cout << factorial << '\n';
     */

    // Второй способ
    cout << findFactorial(n) << " ";
}

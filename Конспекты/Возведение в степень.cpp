#include <iostream>
using namespace std;

long long old_power(long long a, int n){
    if (n == 0)
        return 1;
    else
        return a * old_power(a, n - 1);
}

long long power(long long a, int n){
    if (n == 0)
        return 1;
    else if (n % 2 == 0){
        long long tmp = power(a, n / 2);
        return tmp * tmp;
    }
    else
        return a * power(a, n - 1);


}

int main()
{
    // Возведение в степень числа a в степень n через цикл O(n)

    long long a, n; cin >> a >> n;
    long long res = 1;
    for(int i = 0; i < n; i++){
        res *= a;
    }
    cout << res << endl << endl;

    cout << old_power(a, n) << endl << endl; // через линейный рекурсивный алгоритм: O(n)

    cout << power(a, n) << endl; // через быстрое возведение в степень: О(log(n))
}

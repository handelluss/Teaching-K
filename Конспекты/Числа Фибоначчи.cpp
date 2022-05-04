#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n; // Находим n-ное число Фибоначии

    if (n == 1 || n == 2) {
        cout << 1;
        return 0; // Закончили программу
    }

    // frontNumber = firstPreviousNumber + secondPreviousNumber
    int frontNumber, firstPreviousNumber = 1, secondPreviousNumber = 0;
    frontNumber = firstPreviousNumber + secondPreviousNumber;
    for (int i = 4; i <= n; i++) {
            secondPreviousNumber = firstPreviousNumber;
            firstPreviousNumber = frontNumber;
            frontNumber = firstPreviousNumber + secondPreviousNumber;
    }
    cout << frontNumber;
    return 0;
    
    /*
    	Очень неудобное и некрасивое решение. Даже не через рекурсию есть вариант
	лучше (динамическое программирование). Но если разберёшься - красавчик 
    */   
}

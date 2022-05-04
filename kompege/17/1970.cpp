#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("17.txt");
    int tmp;
    vector<int> a;

    while (fin >> tmp) {
        a.push_back(tmp);
    }
    /* ДРУГОЙ ВАРИАНТ ИНИЦИАЛИЗАЦИИ ВЕКТОРА, для этого необходимо посмотреть, сколько в текстовом файле чисел ручками
        for(int i = 0; i < 5000; i++) {
            fin >> tmp; a.push_back(tmp);
        }
    */
    int cnt = 0, max_sum = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] % 3 == 0 || a[i] % 3 == 0) {
            cnt++;
            if (a[i - 1] + a[i] > max_sum)
                max_sum = a[i - 1] + a[i];
        }
    }
    cout << cnt << " " << max_sum;
}

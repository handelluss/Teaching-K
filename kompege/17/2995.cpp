#include <iostream>
#include <algorithm>
#include <numeric>
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

    int average = accumulate(a.begin(), a.end(), 0) / a.size();
    int counter = 0, max_sum = 0;

    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] < average && a[i + 1] < average && (a[i] % 10 == 9 || a[i + 1] % 10 == 9)) {
            counter++;
            if (max_sum < a[i] + a[i + 1]) {
                max_sum = a[i] + a[i + 1];
            }
        }
    }
    cout << counter << " " << max_sum;
}

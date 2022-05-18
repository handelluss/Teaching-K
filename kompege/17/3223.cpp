#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("17.txt");
    int num;
    vector <int> a;
    while (fin >> num) {
        a.push_back(num);
    }
    vector <int> m;
    for (int i =0; i < a.size(); i++) {
        if (a[i] % 17 == 0) {
            m.push_back(a[i]);
        }
    }
    sort(m.begin(), m.end());
    int max_sum = 0, counter = 0;
    for (int i =0; i < a.size() -1; i++) {
        if (a[i] % m[0] == 0 || a[i + 1] % m[0] == 0) {
            counter++;
            if (max_sum < a[i] + a[i + 1]) {
                max_sum = a[i] + a[i + 1];
            }
        }
    }
    cout << counter << " " << max_sum << endl << endl;
}

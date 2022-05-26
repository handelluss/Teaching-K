#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("26.txt");
    vector<int> a(100);
    int N;
    fin >> N;
    for (int i = 0; i < N; i++) {
          int tmp; fin >> tmp;
          a[tmp] += 1;
    }

    int cnt = a[50] / 2;
    for (int i = 1; i <= 49; i++) {
    	cnt += min(a[i], a[100-i]);
    }
    cout << cnt << endl;
    return 0;
}

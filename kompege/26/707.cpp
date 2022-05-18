#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("26.txt");
    int N, K;
    fin >> N >> K;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        fin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[N - K] << "\t" << accumulate(a.begin() + K, a.end()- K, 0) / (N - 2 * K);
}

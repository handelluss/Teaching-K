#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream fin("26.txt");
    int N, K, M;
    fin >> N >> K >> M;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        fin >> a[i];
    }
    sort(a.begin(), a.end());
    double summ = 0;
    for (int i = 0; i < K; i++) {
        summ += a[N - i - 1] * 0.2;
    }
    for (int i = 0; i < M; i++) {
        summ += a[(N - K) - i - 1] * 0.1;
    }
    cout << a[(N - 1) - (K + M)] << endl << int(summ) << endl;
}

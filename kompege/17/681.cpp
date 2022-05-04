#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <numeric>

using namespace std;

int main() {
    ifstream fin("/home/handelluss/Dev/TeachingCPP/26.txt");
    int n, k, m;
    fin >> n >> k >> m;
    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        fin >> prices[i];
    }
    
    sort(prices.begin(), prices.end());

    cout << prices[n - m] << " " << accumulate(prices.begin(), prices.begin()+k, 0) / k;
}

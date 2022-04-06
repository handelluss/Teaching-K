#include <iostream>
#include <vector>
using namespace std;

int minimum (vector<int>& sequence, int ending) {
    int result = 1e9;
    for (auto item : sequence) {
        if (item % 10 == ending && item < result) {
            result = item;
        }
    }
    return result;
}

int main()
{
    int n; cin >> n;
    vector <int> sequence;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        sequence.push_back(tmp);
    }
    cout << minimum(sequence, 6);
}
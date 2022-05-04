#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(vector<int> &a) {
    for (auto item: a) {
        cout << item << " ";
    }
    cout << endl;
}

bool cmp1(int left, int right) {
    return left > right;
}

bool cmp2(int left, int right) {
    return left % 10 < right % 10;
}

bool cmp3(int left, int right) {
    if (left % 10 != right % 10)
        return left % 10 > right % 10;
    else
        return left / 100 > right / 100;
}

void print_2d(vector<vector<int>> &b) {
    for (auto item: b) {
        for (auto number: item) {
            cout << number << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool cmp4(vector<int>& left, vector<int>& right) {
    return left.size() < right.size();
}

int main() {

    vector<int> a;
    for (int i = 11; i < 32; i++) {
        a.push_back(i * i);
    }

    sort(a.rbegin(), a.rend());
    print(a);

    sort(a.begin(), a.end());
    print(a);

    sort(a.begin(), a.end(), cmp1);
    print(a);

    stable_sort(a.begin(), a.end(), cmp2);
    print(a);

    stable_sort(a.begin(), a.end(), cmp3);
    print(a);

    ///////////////////////////////////////////////////////////////////////
    cout << "\n---------------------------------\n\n";
    vector<vector<int>> b(3);
    for (int i = 0; i < 30; i++) {
        b[0].push_back(i);
    }
    for (int i = 50; i < 60; i++) {
        b[1].push_back(i);
    }
    for (int i = -20; i > -35; i--) {
        b[2].push_back(i);
    }

    print_2d(b);

    sort(b.begin(), b.end(), cmp4);
    print_2d(b);

    sort(b.rbegin(), b.rend(), cmp4);
    print_2d(b);
}

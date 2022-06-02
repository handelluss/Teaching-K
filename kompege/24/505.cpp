#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

bool f (char c, char b) {
    int sum = c + b - 2 * '0';
    return sum >= 10;
}

int main()
{
    ifstream fin("24.txt");
    string a;
    fin >> a;
    int counter = 1, maxx = 0;
    for(int i = 0; i < a.size() - 1; i++) {
        if (f(a[i], a[i + 1])) {
            counter++;
        }
        else {
            maxx = max(maxx, counter);
            counter = 1;
        }
    }
    cout << max(maxx, counter);
}

#include <iostream>
#include <vector>
using namespace std;


int f(int start, int end) {
    if (start == end)
        return 1;
    else if (start > end)
        return 0;
    else
        return f(start+1, end) + f(start*2, end) + f(start*3, end);
}

int main() {

    vector <int> a(31);
    a[2] = 1;

    for (int i = 3; i <= 15; i++) {
        a[i] = a[i-1];
        if (i % 2 == 0) a[i] += a[i/2];
        if (i % 3 == 0) a[i] += a[i/3];
    }
    for (int i = 16; i <= 30; i++) {
      a[i] = a[i-1];
      if (i % 2 == 0 && i/2 >= 15)
          a[i] += a[i/2];
      if (i % 3 == 0 && i/3 >= 15)
          a[i] += a[i/3];
    }

    cout << a[30] << '\t' << f(2,15) * f(15,30);

    return 0;
}

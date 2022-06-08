#include <iostream>
#include <vector>
using namespace std;

int f (int start, int end) {
    if (start == end)
      return 1;
    else if (start > end)
      return 0;
    else
      return f(start+1, end) + f(start*2, end);
}
int main() {

    vector <int> a (17);
    a[0] = a[1] = 1;

    for (int i = 2; i <= 16; i++) {
        if (i % 2 == 0)
          a[i] = a[i-1] + a[i / 2];
        else
          a[i] = a[i-1];
    }

    cout << a[16] << '\t' << f(1, 16);

    return 0;
}

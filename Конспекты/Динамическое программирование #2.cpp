#include <iostream>
#include <vector>
using namespace std;

int f(int start, int end) {
    if (start == end)
        return 1;
    else if(start > end || start == 8)
        return 0;
    else
        return f(start+1, end) + f(start+2, end) + f(start+3, end);
}


int main() {

    vector <int> a(16);
    a[3] = 1;
//    a[0] = a[1] = a[2] = 0;

    for (int i = 4; i <= 15; i++) {
        if (i == 8)
          continue;
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }

    cout << a[15] << '\t' << f(3, 15);
    return 0;
}

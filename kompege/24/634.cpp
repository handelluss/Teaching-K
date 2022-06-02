#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("24.txt");
    int countt = 0;
    for (int i = 0; i < 1000; i++) {
        string a;
        fin >> a;
        int counter = 0;
        for(int i = 0; i < a.size() - 3; i++) {
            if (a[i] == 'Z' && a[i + 2] == 'R' && a[i + 3] == 'O') {
                counter++;
            }
        }
        if (counter > 0) {
            countt++;
        }
    }
    cout << countt;
}

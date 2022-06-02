#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("24.txt");
    string a;
    fin >> a;
    int counter = 0, maxx = 0;
    for(int i = 0; i < a.size() - 1; i++) {
        if ((a[i] == 'B'|| a[i] == 'D') && a[i + 1] == 'A' ) {
            counter++;
            i++;
        }
        else {
            maxx = max(maxx, counter);
            counter = 0;
        }
    }
    cout << maxx;
}

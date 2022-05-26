#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){

    ifstream fin("24.txt");
    string s; fin >> s;


    string cot = "02468";
    for (int i = 0; i < s.length(); i++) {
        if (cot.find(s[i]) != -1) {
            s[i] = 'X';
        }
        else {
            s[i] = 'Y';
        }
    }
    int res = 0, loc_res = 1;
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i] == s[i+1]) {
            loc_res += 1;
        }
        else {
            res = max(res, loc_res);
            loc_res = 1;
        }
    }
    res = max(res, loc_res);
    cout << res << endl;
    return 0;
}

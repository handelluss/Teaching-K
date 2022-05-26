#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){

    ifstream fin("24.txt");
    string s; fin >> s;

    int res = 0;
    int loc_res = 1;

    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            loc_res++;
        }
        else{
            res = max(res, loc_res);
            loc_res = 1;
        }
    }
    res = max(res, loc_res);

    cout << res;
    return 0;
}

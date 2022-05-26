#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    s = "Hello world!\n\n";
    cout << s;

    s = "PKR";
    cout << s << endl;

    s = s + "\tAnton\n\n" + "aPP" + 'p';
    // '' - символ
    // "" - строка
    cout << s;


    cout << endl << s.length() << endl << s.size();

    s = "Hello, Anton!\n";
    cout << s[4];

    s.push_back('G');
    s.append("GGG");
    cout << s << endl;;

    cout << s.find("Anton");
    return 0;
}

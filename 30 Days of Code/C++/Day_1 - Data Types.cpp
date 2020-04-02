#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b;
    string c;

    string tmp;

    getline(cin, tmp);
    a = stoi(tmp);

    getline(cin, tmp);
    b = stod(tmp);

    getline(cin, c);

    i+=a;
    cout<<i<<endl;

    d+=b;
    cout<<fixed<<setprecision(1)<<d<<endl;

    cout<<s<<c<<endl;

    return 0;
}

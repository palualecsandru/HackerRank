#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string n[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        i<=9? cout<<n[i]<<"\n":
        i%2==0? cout<<"even\n":
        cout<<"odd\n";

    }
    return 0;
}

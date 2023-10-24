#include<iostream>
#include<string>

using namespace std;

int main(){
    string a,b,c;
    char t;

    cin>>a>>b;

    c = a+b;

    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<c<<endl;

    t = a[0];
    a[0] = b[0];
    b[0] = t;

    cout<<a<<" "<<b<<endl;

}
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    cin>>m;
    int b[m];
    for(int i=0; i<m; i++)
        cin>>b[i];

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[i] != b[j]){
                cout<<b[j]<<" ";
            }
        }
    }

    return 0;
}





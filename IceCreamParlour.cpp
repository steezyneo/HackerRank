#include <iostream>

using namespace std;

int main() {
    int i, j, t, m, n;
    cin >> t;
   


    while (t != 0) {
        
        cin >> m;
        cin >> n;
        int cost[n + 1]; 

        for (i = 1; i <= n; i++) 
            cin >> cost[i];
        

        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (cost[i] + cost[j] == m) {
                    cout << i << " " << j << endl;
                }
            }
        }
        t--;
    }
}

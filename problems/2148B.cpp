#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long m, n, x, y;
        cin >> m >> n >> x >> y;

        long long temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
        }
        for(int i = 0; i < m; i++){
            cin >> temp;
        }

        cout << n + m << endl;
    }
    return 0;
}
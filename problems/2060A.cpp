#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int ans = 0;
        int x[3] = {
            a1 + a2,
            a4 - a2,
            a5 - a4
        };

        for(int i = 0; i < 3; i++) {
            int a3 = x[i];
            int cnt = 0;

            if(a3 == a1 + a2) cnt++;
            if(a4 == a2 + a3) cnt++;
            if(a5 == a3 + a4) cnt++;

            ans = max(ans, cnt);
        }

        cout << ans << '\n';
    }

    return 0;
}
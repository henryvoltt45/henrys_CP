#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        int i = n - 2;

        while (i >= 0) {
            if (s[i] != s[i + 1]) {
                ans++;
                char c = s[i];
                while (i >= 0 && s[i] == c) i--;
            } else {
                i--;
            }
        }

        cout << ans << endl;
    }
}
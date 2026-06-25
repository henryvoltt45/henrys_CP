#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        cout << s.find("RL") + 2 << '\n';
    }

    return 0;
}

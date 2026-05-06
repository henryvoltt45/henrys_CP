#include <iostream>
using namespace std;

int main() {
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    
    while(true) {
        if (a == b) {
            cout << "Yes" << endl;
            return 0;
        }
        
        if (a == x || b == y) {
            break;
        }
        
        a++;
        if (a > n) a = 1;
        
        b--;
        if (b < 1) b = n;
        
    }
    cout << "No" << endl;
    return 0;
}

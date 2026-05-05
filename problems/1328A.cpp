#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;
        long long count = a % b;
        
        if (count == 0) {
            cout << 0 << endl;
        } else {
            cout << b - count<< endl;
        }
    }
    return 0;
}
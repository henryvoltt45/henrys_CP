#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        
        int max_ab = max(b, c);
        int max_bc = max(a, c);
        int max_ca = max(a, b);

        int A = (a > max_ab) ? 0 : (max_ab - a + 1);
        int B = (b > max_bc) ? 0 : (max_bc - b + 1);
        int C = (c > max_ca) ? 0 : (max_ca - c + 1);
        cout << A << " " << B << " " << C << endl;
    }
    return 0;
}
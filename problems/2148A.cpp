#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        if(y % 2 == 0){
            cout << 0 << endl;
        } else {
            cout << x << endl;
        }
    }
    return 0;
}
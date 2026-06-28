#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << min(67, x + 1) << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        bool genap = false;
        bool ganjil = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] % 2 == 0){
                genap = true;
            } else {
                ganjil = true;
            }
        }
        if(genap && ganjil){
            sort(a.begin(), a.end());
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << endl;
        }
        cout << endl;
    }
    return 0;
}
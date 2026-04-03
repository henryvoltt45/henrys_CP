#include <iostream>
using namespace std;

int rex(int hapinnes) {
    int justFriend;
    if (hapinnes + 5 > 10) {
        justFriend = 10;
    }

    return justFriend + hapinnes;
}

int main() {
    int hasil = rex(7);
    cout << hasil << endl;
    return 0;
}
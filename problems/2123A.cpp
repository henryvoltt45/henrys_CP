#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	while (n--) {
	    int t;
	    cin >> t;
	    
	    if (t % 4 == 0) {
	        cout << "bob" << endl;
	    } else {
	        cout << "alice" << endl;
	    }
	}

}

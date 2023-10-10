#include <iostream>
using namespace std;

void print(int n) {
	//base case
	if(n == 1) {
		cout << 1 << " ";
		return;
	}
	//processing
	cout << n << " ";
	//recursion call
	print(n-1);
} 

int pow(int n) {
	//base case
	if(n == 0) {
		return 1;
	}

	int ans = 2 * pow(n-1);
	return ans;
}

return 0;
}

#include <iostream>
using namespace std;

int main() {
	int x, sum = 1;
	cin >> x;

	cout << 1;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;

	return 0;
}
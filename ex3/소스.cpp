#include <iostream>
using namespace std;

int main() {
	int N, M, i, sum = 0;
	cin >> N >> M;

	for (i = 1; i <= N; i++) {
		if (i % M == 0)
			sum += i;
	}
	cout << "N 값은 " << N << ", " << "M 값은 " << M << endl;
	cout << sum;

	return 0;
}
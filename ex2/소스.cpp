#include <iostream>
#include <random>
using namespace std;

int main() {
	int i, ans;
	char a;

	cout << "산수 문제를 자동으로 출제합니다." << endl;
	random_device rd;
	mt19937 r(rd());
	uniform_int_distribution<> dis(1, 10);

	while (true) {
		int x = dis(r);
		int y = dis(r);
		cout << x << " " << y << endl;

		cout << "연산자 입력하기(+, -, *, /)" << endl;
		cin >> a;
		cout << "결과 입력하기" << endl;

		switch (a) {
		case '+':
			cin >> ans;
			if (x + y == ans) {
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
			break;
		case '-':
			cin >> ans;
			if (x - y == ans) {
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
			break;
		case '*':
			cin >> ans;
			if (x * y == ans) {
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
			break;
		case '/':
			cin >> ans;
			if (x / y == ans) {
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
			break;
		}
		return 0;
	}
	return 0;
}
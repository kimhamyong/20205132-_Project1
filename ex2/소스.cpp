#include <iostream>
#include <random>
using namespace std;

int main() {
	int i, ans;
	char a;

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	random_device rd;
	mt19937 r(rd());
	uniform_int_distribution<> dis(1, 10);

	while (true) {
		int x = dis(r);
		int y = dis(r);
		cout << x << " " << y << endl;

		cout << "������ �Է��ϱ�(+, -, *, /)" << endl;
		cin >> a;
		cout << "��� �Է��ϱ�" << endl;

		switch (a) {
		case '+':
			cin >> ans;
			if (x + y == ans) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
			break;
		case '-':
			cin >> ans;
			if (x - y == ans) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
			break;
		case '*':
			cin >> ans;
			if (x * y == ans) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
			break;
		case '/':
			cin >> ans;
			if (x / y == ans) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
			break;
		}
		return 0;
	}
	return 0;
}
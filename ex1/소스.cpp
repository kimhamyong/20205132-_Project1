#include <iostream>
using namespace std;

int main() {
	cout << "�����ڸ� �Է��ϰ� Ctrl+Z�� �Է��ϼ���." << endl;

	char eng;
	int i = 0, j = 0;

	while (cin >> eng)
	{
		if (eng == 'a' || eng == 'e' || eng == 'i' || eng == 'o' || eng == 'u')
			i++;

		else if (eng >= 65 && eng <= 90)
			cout << "Check to a alphabet" << endl;

		else
			j++;
	}
	cout << "���� : " << i << endl;
	cout << "���� : " << j << endl;

	return 0;
}
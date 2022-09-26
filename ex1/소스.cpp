#include <iostream>
using namespace std;

int main() {
	cout << "영문자를 입력하고 Ctrl+Z를 입력하세요." << endl;

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
	cout << "모음 : " << i << endl;
	cout << "자음 : " << j << endl;

	return 0;
}
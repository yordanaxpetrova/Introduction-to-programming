#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int hundred = n / 100;
	cout << hundred << "x100 lv" << endl;
	n %= 100;

	int fifty = n / 50;
	cout << fifty << "x50 lv" << endl;
	n %= 50;

	int twenty = n / 20;
	cout << twenty << "x20 lv" << endl;
	n %= 20;

	int ten = n / 10;
	cout << ten << "x10 lv" << endl;
	n %= 10;

	int five = n / 5;
	cout << five << "x5 lv" << endl;
	n %= 5;

	int two = n / 2;
	cout << two << "x2 lv" << endl;
	n %= 2;

	cout << n << "x1 lv" << endl;
}

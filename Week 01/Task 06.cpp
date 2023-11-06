#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cin >> a >> b;
	int expr1 = a + b;
	int expr2 = a - b;

	cout << expr1 * expr1 * expr1 * expr1 - expr2 * expr2;
}

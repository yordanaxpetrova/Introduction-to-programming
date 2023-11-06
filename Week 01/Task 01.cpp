/* Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.
Вход: 265, Изход: 0
Вход: 290, Изход: 1 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter an integer number: " << endl;
    cin >> n;

    bool isEven = n % 2 == 0;
    cout << isEven;
}

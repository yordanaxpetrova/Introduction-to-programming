#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cin >> symbol;

    bool isEnglish = (symbol == 'A' || symbol == 'a' || symbol == 'E' || symbol == 'e' || symbol == 'O' || symbol == 'o' || symbol == 'U'
        || symbol == 'u' || symbol == 'I' || symbol == 'i');

    cout << isEnglish;
}

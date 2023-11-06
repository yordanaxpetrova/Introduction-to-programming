#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cin >> symbol;

    bool isEnglish = (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');

    cout << isEnglish;
}

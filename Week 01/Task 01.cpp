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

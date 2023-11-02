#include <iostream>

using namespace std;
int main()
{
    int number;
    cin >> number;
    int first = number % 10;
    int second = (number / 10) % 10;
    int third = (number / 100) % 10;
    int fourth = number / 1000;

    cout << endl << first << second << third<< fourth << endl;
}

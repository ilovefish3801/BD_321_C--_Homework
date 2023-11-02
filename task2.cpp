#include <iostream>

using namespace std;
int main()
{
    int totalSeconds;
    cin >> totalSeconds;
   
    int minutes = (totalSeconds % 3600) / 60;
    int hours = totalSeconds / 3600;
    int seconds = totalSeconds % 60;

    cout << endl << hours << ":" << minutes << ":" << seconds;
    
    totalSeconds = 86400 - totalSeconds;

    cout << endl << (totalSeconds % 3600) / 60 << ":" << totalSeconds / 3600 << ":" << totalSeconds % 60;
}

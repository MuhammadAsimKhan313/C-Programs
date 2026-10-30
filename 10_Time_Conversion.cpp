#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter total number of seconds: "<<endl;
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds / 60) % 60;
    seconds = totalSeconds % 60;

    cout << "\nHours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int eng, phy, math, urdu, comp;
    int sum;
    float average, percentage;

    cout << "Enter marks in English (out of 100): "<<endl;
    cin >> eng;
    cout << "Enter marks in Physics (out of 100): "<<endl;
    cin >> phy;
    cout << "Enter marks in Mathematics (out of 100): "<<endl;
    cin >> math;
    cout << "Enter marks in Urdu (out of 100): "<<endl;
    cin >> urdu;
    cout << "Enter marks in Computer (out of 100): "<<endl;
    cin >> comp;

    sum = eng + phy + math + urdu + comp;
    average = sum / 5;
    percentage = (sum / 500) * 100;

    cout << "\nSum marks: " << sum << " / 500" << endl;
    cout << "Average marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
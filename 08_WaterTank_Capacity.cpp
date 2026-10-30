#include <iostream>
using namespace std;

int main() {
    double length, width, height;
    double volume, capacity;

    cout << "Enter length of tank (m): "<<endl;
    cin >> length;
    cout << "Enter width of tank (m): "<<endl;
    cin >> width;
    cout << "Enter height of tank (m): "<<endl;
    cin >> height;

    volume = length * width * height;
    capacity = volume * 1000;

    cout << "\nVolume: " << volume << " cubic metres" << endl;
    cout << "Capacity: " << capacity << " litres" << endl;

    return 0;
}
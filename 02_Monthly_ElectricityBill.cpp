#include <iostream>
using namespace std;

int main() {
    int units;
    double pricePerUnit, total;

    cout << "Enter number of electricity units consumed: "<<endl;
    cin >> units;

    cout << "Enter price per unit (Rs.): "<<endl;
    cin >> pricePerUnit;

    total = units * pricePerUnit;

    cout << "\nTotal electricity charges: Rs. " << total << endl;

    return 0;
}
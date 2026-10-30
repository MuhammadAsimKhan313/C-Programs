#include <iostream>
using namespace std;

int main() {
    double basicSalary, houseRent, medical, grossSalary;

    cout << "Enter basic monthly salary (Rs.): "<<endl;
    cin >> basicSalary;
    cout << "Enter house rent allowance (Rs.): "<<endl;
    cin >> houseRent;
    cout << "Enter medical allowance (Rs.): "<<endl;
    cin >> medical;

    grossSalary = basicSalary + houseRent + medical;

    cout << "\nGross salary: Rs. " << grossSalary << endl;

    return 0;
}
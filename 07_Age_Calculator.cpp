#include <iostream>
using namespace std;

int main() {
    int years, months, weeks, days;

    cout << "Enter age in years: "<<endl;
    cin >> years;

    months = years * 12;
    weeks = years * 52;
    days = years * 365;

    cout << "\nApproximate age in months: " << months << endl;
    cout << "Approximate age in weeks: " << weeks << endl;
    cout << "Approximate age in days: " << days << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int pricebook, pricepen, qtynotebook, qtypen, total;

    cout << "Enter number of notebooks: ";
    cin >> qtynotebook;

    cout << "Enter number of pens: ";
    cin >> qtypen;

    pricebook = 120;
    pricepen = 40;

    total = (pricebook * qtynotebook) + (pricepen * qtypen);

    cout << "\nTotal shopping bill: Rs. " << total << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double distance, kmPerLitre, pricePerLitre;
    double petrolConsumed, totalCost;

    cout << "Enter distance travelled (km): "<<endl;
    cin >> distance;
    cout << "Enter average fuel consumption (km per litre): "<<endl;
    cin >> kmPerLitre;
    cout << "Enter petrol price per litre (Rs.): "<<endl;
    cin >> pricePerLitre;

    petrolConsumed = distance / kmPerLitre;
    totalCost = petrolConsumed * pricePerLitre;

    cout << "\nPetrol consumed: " << petrolConsumed << " litres" << endl;
    cout << "Total fuel cost: Rs. " << totalCost << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double purchasePrice, sellingPrice;
    int quantity;
    double totalCost, totalRevenue, profitOrLoss;

    cout << "Enter purchase price per item (Rs.): "<<endl;
    cin >> purchasePrice;
    cout << "Enter selling price per item (Rs.): "<<endl;
    cin >> sellingPrice;
    cout << "Enter quantity sold: "<<endl;
    cin >> quantity;

    totalCost = purchasePrice * quantity;
    totalRevenue = sellingPrice * quantity;
    profitOrLoss = totalRevenue - totalCost;

    cout << "\nTotal purchase cost: Rs. " << totalCost << endl;
    cout << "Total sales revenue: Rs. " << totalRevenue << endl;
    cout << "Profit or loss: Rs. " << profitOrLoss << endl;

    return 0;
}
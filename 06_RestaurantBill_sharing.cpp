#include <iostream>
using namespace std;

int main() {
    double totalBill, amountPerFriend;
    int friends;

    cout << "Enter total restaurant bill (Rs.): "<<endl;
    cin >> totalBill;
    cout << "Enter number of friends: "<<endl;
    cin >> friends;

    amountPerFriend = totalBill / friends;

    cout << "\nEach friend must pay: Rs. " << amountPerFriend << endl;

    return 0;
}
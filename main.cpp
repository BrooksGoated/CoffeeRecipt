#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string foodName;
    char itemCode;
    int quantity;
    double unitPrice;
    char isMember;

    //gets the input from the user
    cout << "Enter the name of the food item: ";
    getline(cin, foodName);

    cout << "Enter the item code (single character): ";
    cin >> itemCode;

    cout << "Enter the quantity: ";
    cin >> quantity;

    cout << "Enter the unit price: ";
    cin >> unitPrice;

    cout << "Is the customer a member? (y/n): ";
    cin >> isMember;

    //actually does the calculations
    double subCost = quantity * unitPrice;
    double discount = (isMember == 'y' || isMember == 'Y') ? subCost * 0.10 : 0.0;
    double totalCost = subCost - discount;

    //printing the recipt 

    cout << "\n=========== RECEIPT ==========\n";
    cout << left << setw(15) << "Food Item:" << setw(15) << foodName << endl;
    cout << left << setw(15) << "Item Code:" << setw(15) << itemCode << endl;
    cout << left << setw(15) << "Quantity:" << setw(15) << quantity << endl;

    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Unit Price:" << right << setw(10) << unitPrice << endl;
    cout << left << setw(15) << "Subtotal:" << right << setw(10) << subCost << endl;
    cout << left << setw(15) << "Discount:" << right << setw(10) << discount << endl;
    cout << left << setw(15) << "TOTAL:" << right << setw(10) << totalCost << endl;

    cout << "=============================\n";

    return 0;
}
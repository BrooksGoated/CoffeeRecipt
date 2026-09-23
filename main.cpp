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
    string cashierNotes;
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

    // Clear leftover newline before getline()
    cin.ignore();
    
    cout << "Enter cashier notes: ";
    getline(cin, cashierNotes);

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
    cout << "\nCashier Notes:\n" << cashierNotes << endl;
    cout << "=============================\n";
    
    
    // Inventory Audit Table
    cout << "\n====== INVENTORY AUDIT ======\n";
    cout << left << setw(15) << "Item Name"
         << setw(10) << "Code"
         << setw(10) << "Qty"
         << setw(12) << "Unit Price"
         << setw(12) << "Subtotal"
         << endl;

    cout << left << setw(15) << foodName
         << setw(10) << itemCode
         << setw(10) << quantity
         << setw(12) << unitPrice
         << setw(12) << subCost
         << endl;
    return 0;
}
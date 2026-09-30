#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string foodName;
    char menuChoice;
    char size;
    int quantity;
    double unitPrice;
    char isMember;
    string cashierNotes;
    //gets the input from the user
    cout << "================ DRINK MENU ================\n";
    cout << left << setw(20) << "Drink"
        << setw(12) << "Small"
        << setw(12) << "Medium"
        << setw(12) << "Large" << endl;

    cout << left << setw(20) << "A. Apple Juice"
        << setw(12) << "2.50"
        << setw(12) << "3.50"
        << setw(12) << "4.50" << endl;

    cout << left << setw(20) << "B. Lemonade"
        << setw(12) << "2.00"
        << setw(12) << "3.00"
        << setw(12) << "4.00" << endl;

    cout << left << setw(20) << "C. Soda"
        << setw(12) << "1.50"
        << setw(12) << "2.50"
        << setw(12) << "3.50" << endl;
    cout << "\nSelect a drink (A, B, or C): ";
    cin >> menuChoice;

    

    cout << "Enter the quantity: ";
    cin >> quantity;

   
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
#include <iostream>

using namespace std;

int main() {
    double item1Price, item2Price, budget;
    int item1Quantity,item2Quantity;

    cout << "Enter Item 1 Price: ";
    cin >> item1Price;
    cout << "Enter Item1 Quantity: ";
    cin >> item1Quantity;

    cout << "Enter Item 2 Price: ";
    cin >> item2Price;
    cout << "Enter Item 2 Quantity: ";
    cin >> item2Quantity;

    cout << "Enter Budget: ";
    cin >> budget;
    double item1Cost = item1Price * item1Quantity;
    double item2Cost = item2Price * item2Quantity;
    double totalCost = item1Cost + item2Cost;
    int totalItems = item1Quantity + item2Quantity;
    double averageCostPerItem = totalCost / totalItems;
    double remainingBudget = budget - totalCost;
    cout << "item 1 Cost = " << item1Cost << endl;
    cout << "item 2 Cost = " << item2Cost << endl;
    cout << "Total Cost = " << totalCost << endl;
    cout << "Total Items = " << totalItems << endl;
    cout << "Average Cost per Item = " << averageCostPerItem << endl;
    cout << "Remainingh Budget = " << remainingBudget << endl;
    cout << "totalCost <= budget : " << (totalCost <= budget) << endl; //using literals over here to keep code more concise
    cout << "totalCost > budget : " << (totalCost > budget) << endl;
    cout << "item1Cost == item2Cost : " << (item1Cost == item2Cost) << endl;
    cout << "item1Price != item2Price : " << (item1Price != item2Price) << endl;
    cout << "item1Quantity >= item2Quantity : " << (item1Quantity >= item2Quantity) << endl;

    


    return 0;
}
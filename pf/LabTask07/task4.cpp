#include <iostream>
#include <iomanip>

using namespace std;

double calculateWeightCharge(double weightKg);
double calculateZoneCharge(int zone);
void applyMemberDiscount(double& total, char memberChoice);
void printBill(double weightCharge, double zoneCharge, double finalTotal, char memberChoice);


int main() {

    double weight;
    int deliveryZone;
    char choice;
    do {
    cout << "Enter value for weight (kg): ";
    cin >> weight;
    if (weight <= 0) {
        cout << "Error, weight must be greater than 0" << endl;
    }
    }
    while (weight <= 0);

    do {
    cout << "Enter delivery zone (1-3): ";
    cin >> deliveryZone;
    if (deliveryZone < 1 || deliveryZone > 3) {
        cout << "Invalid zone, must be between 1 and 3, please try again" << endl;
    }
    }
    while (deliveryZone < 1 || deliveryZone > 3);

    do {
        cout << "Are you a member? (Y/N): ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Invalid choice, please enter Y or N" << endl;
        }
    }
    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');

    double weightCharge = calculateWeightCharge(weight);
    double zoneCharge = calculateZoneCharge(deliveryZone);
    double total = weightCharge + zoneCharge;
    applyMemberDiscount(total, choice);
    printBill(weightCharge, zoneCharge, total, choice);

    return 0;
}

double calculateWeightCharge(double weightKg) {
    if (weightKg <= 2) {
        return 200;
    }
    else if (weightKg <= 5) {
        return 350;
    }
    else {
        return 350 + (weightKg - 5) * 80;
    }
}

double calculateZoneCharge(int zone) {
    switch (zone) {
        case 1:
            return 100;
        case 2:
            return 200;
        case 3:
            return 300;
    }
    return 0;
}

void applyMemberDiscount(double& total, char memberChoice) {
    if (memberChoice == 'Y' || memberChoice == 'y') {
        total = total - (total * 0.10);
    }
}

void printBill(double weightCharge, double zoneCharge, double finalTotal, char memberChoice) {
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Parcel Bill: " << endl;
    cout << "Weight charge: Rs. " << weightCharge << endl;
    cout << "Zone charge:   Rs. " << zoneCharge << endl;
    cout << "Member status: " << ((memberChoice == 'Y' || memberChoice == 'y') ? "Member (10% discount)" : "Non-member") << endl;
    cout << "Final amount:  Rs. " << finalTotal << endl;
}


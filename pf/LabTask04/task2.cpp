#include <iostream>

using namespace std;

int main () {
    // using these variables as sample names as well tp avoid redundancy
    int accountNumber;
    float transactionAmount;
    double sampleDouble;
    char accountStatus;
    bool isActive;

    accountNumber = 23102007;
    transactionAmount = 6381.4;
    accountStatus = 'A'; // A for acctive, U for unactive
    isActive = true;

    cout << "Variable " << "accountNumber" << " uses " << sizeof(accountNumber) << " bytes of memory" << endl;
    cout << "Variable " << "transactionAmount" << " uses " << sizeof(transactionAmount) << " bytes of memory" << endl;
    // commenting this out since its not needed anymore:
    // cout << "Variable " << "sampleDouble" << " uses " << sizeof(sampleDouble) << " bytes of memory" << endl;
    cout << "Variable " << "accountStatus" << " uses " << sizeof(accountStatus)  << " bytes of memory" << endl;
    cout << "Variable " << "isActive" << " uses " << sizeof(isActive) << " bytes of memory" << endl;

    int totalBytes = sizeof(accountNumber) + sizeof(transactionAmount)
     + sizeof(accountStatus) + sizeof(isActive); //take  total here

    double totalKiloBytes = totalBytes / 1024.0;  //using floating poont division here by making numerator a float explicitly
    double totalMegaBytes = totalKiloBytes / 1024.0;


    cout << "Total Memory usage fpor One account in bytes = " << totalBytes << " B" << endl;
    // multiply by 10k when outputting instead of in a variable
    cout << "Total Memory usage for 10,000 accounts in bytes = "<< totalBytes * 10000 << " B" << endl;
    cout << "Total Memory usage for 10,000 accounts in kilobytes = "<< totalKiloBytes * 10000 << " KB" << endl;
    cout << "Total Memory usage for 10,000 accounts in Megabytes = "<< totalMegaBytes * 10000 << " MB" << endl;




    return 0;
}
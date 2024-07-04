#include<bits/stdc++.h>
using namespace std;

int main() {
    string ccNumber;

    cout << "This program uses the Luhn Algorithm to validate a CC number." << endl<<endl;
    cout << "Please enter a CC number to validate: ";
    cin >> ccNumber;
    cout<<ccNumber<<endl;






    int len = ccNumber.length();
    int doubleEvenSum = 0;

    // Step 1 is to double every second digit, starting from the right. If it
    // results in a two-digit number, add both the digits to obtain a single
    // digit number. Finally, sum all the answers to obtain 'doubleEvenSum'.

    for (int i = len - 2; i >= 0; i = i - 2) {
        int dbl = ((ccNumber[i] - 48) * 2);
        if (dbl > 9) {
            dbl = (dbl / 10) + (dbl % 10);
        }

        doubleEvenSum += dbl;

    }

    // Step 2 is to add every odd placed digit from the right to the value
    // 'doubleEvenSum'.

    for (int i = len - 1; i >= 0; i = i - 2) {
        doubleEvenSum += (ccNumber[i] - 48);
    }

    // Step 3 is to check if the final 'doubleEvenSum' is a multiple of 10.
    // If yes, it is a valid CC number. Otherwise, not.

    cout << (doubleEvenSum % 10 == 0 ? "Valid!" : "Invalid!") << endl;




    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;
    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate: ";
    cin >> rate;

    cout << "Enter time: ";
    cin >> time;

    float si = (principal * rate * time) / 100;
    float amount = principal + si;

    cout <<" simple interest = " << si << endl;
    cout <<" total amount = " << amount << endl;

    return 0;
}
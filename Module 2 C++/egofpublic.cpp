#include <iostream>
#include <string>
using namespace std;
class BankAccount {
public: // everything is public
string holder;
double balance;
};
int main() {
BankAccount acc;
acc.holder = "Asha";
acc.balance = 5000;
cout << "Balance: " << acc.balance << endl;
acc.balance = -25000; // nothing stops this invalid value!
cout << "Balance: " << acc.balance << endl;
return 0;
}
class BankAccount {
private:
double balance;
public:
void show() {
cout << balance; // OK: inside the class
}
};
int main() {
BankAccount acc;
acc.balance = 500; // outside the class
return 0;
}
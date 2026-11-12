class Account {
private:
double balance; // hidden from outside
protected:
int branchCode; // used with inheritance (Module 3)
public:
void deposit(double amount); // the public interface
};
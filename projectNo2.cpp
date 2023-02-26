#include <iostream>
using namespace std;

class BankAccount {
private:
    double Account_balance, Interset_rate;
public:
    void depositing(double deposit) {
        Account_balance += deposit;
    }
    void calcIntersetRate(double rate) {
        double Hram = Account_balance * rate;
        Account_balance += Hram;
        cout << "your interset balance is " << Account_balance << endl;
    }
    void withdrawing(double withdraw) {
        Account_balance -= withdraw;
        cout << "You have drown " << withdraw << endl;
        cout << "your balance is " << Account_balance << endl;
    }
    BankAccount() {
        Account_balance = 0;
        Interset_rate = 0;
    }

};

int main()
{
    BankAccount bank_account = BankAccount();

    bank_account.depositing(500);
    bank_account.calcIntersetRate(0.025);
    bank_account.withdrawing(100);
    
    return 0;
}
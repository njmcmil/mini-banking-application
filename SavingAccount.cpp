#include "SavingAccount.h"


SavingAccount::SavingAccount(double b) : BankAccount(b), numWithdrawalsThisMonth(0) {}

void SavingAccount::applyMonthlyInterest(double apy)
{
    balance += apy;
}

void SavingAccount::Withdraw(double amount)
{
    if(amount <= balance && numWithdrawalsThisMonth <= withdrawalMonthlyLimit)
    {
        BankAccount::Withdraw(amount);
        numWithdrawalsThisMonth++;
        std::cout << "Withdraw Successful.\nBalance: " << getBalance() << std::endl;
    }else {
        std::cout << "Withdraw denied. Exceeds monthly withdraw limit." << std::endl;
    }
}



void SavingAccount::CreatedBankAccount()
{
    std::cout << "*** Savings Account ***" << std::endl;
    std::cout << "Account #" << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}

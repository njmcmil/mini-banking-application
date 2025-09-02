#include "SavingAccount.h"


SavingAccount::SavingAccount(double b) : BankAccount(b), numWithdrawalsThisMonth(0) {}


//Monthly interest to a savings account
void SavingAccount::applyMonthlyInterest(double apy)
{
    balance += apy;
}


//Overriding withdraw so # of withdraws are limited
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


//Overriding Bank Account info for savings account
void SavingAccount::CreatedBankAccount()
{
    std::cout << "*** Savings Account ***" << std::endl;
    std::cout << "Account #" << accountNumber << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}

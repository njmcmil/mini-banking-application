#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingAccount : public BankAccount
{
    protected:
        double interestRate = 0.0042;
        const int withdrawalMonthlyLimit = 6;
        int numWithdrawalsThisMonth;

    public:
        SavingAccount(double b);
        void applyMonthlyInterest(double apy);
        void Withdraw(double amount) override;
        void CreatedBankAccount() override;
};















#endif
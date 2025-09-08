#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

//Standard CheckingAccount : derived from bank account

class CheckingAccount : public BankAccount 
{
    protected:
        const double monthlyFee = 12;
        const double overdraftLimit = 200;

    
    public:
    CheckingAccount(double b);
    void applyMonthlyFee();
    //tells compiler to override function
    void Withdraw(double amount) override;
    void CreatedBankAccount() override;

};











#endif 
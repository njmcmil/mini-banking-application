#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

//Standard CheckingAccount

class CheckingAccount : public BankAccount 
{
    private:
        const double monthlyFee = 15;
        const double overdraftLimit = 200;

    
    public:
    CheckingAccount(double b);
    void applyMonthlyFee(double f);
    //tells compiler to override function
    void Withdraw(double amount) override;
    void CreatedBankAccount() override;

};











#endif 
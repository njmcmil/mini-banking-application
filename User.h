#ifndef USER_H
#define USER_H


#include "CheckingAccout.h"
#include "SavingAccount.h"
using namespace std;


class User
{
    protected:
        const int userID;
        string Username;
        string password;
        string email;
        string phoneNumber;



    public:
    User(string UName, string pw, string email, string phoneNum);


    int generateRandomUserID();
    
    int getUserID()      const { return userID; }
    string getUsername() const { return Username; }
    string getPassword() const { return password; }
    string getEmail()    const { return email; }
    string getPhoneNumber() const { return phoneNumber; }

    void setUserName(string Uname) { this->Username = Uname; }
    void setPassword(string pw)    { this->password = pw; }
    void setEmail(string email)    { this->email    = email; }
    void setPhoneNumber(string phoneNum) { this->phoneNumber = phoneNum; }


};










#endif 
#include "User.h"


User::User(string UName, string pw, string email, string phoneNum) : userID(generateRandomUserID()), Username(UName), password(pw), email(email), phoneNumber(phoneNum) {}


//Generate a 5-digit user id
int User::generateRandomUserID()
{
    srand(time(NULL));
    return rand() % 90000 + 10000;
}







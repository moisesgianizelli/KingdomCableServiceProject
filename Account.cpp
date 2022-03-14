#include "Account.h"
#include <iostream>
#include <string>
#include "Internet.h"

using namespace std;

//Passing values


Account::Account(bool premium, short password)
{
    this->accountPremium = premium;
    this->passCode = password;
}




void Account::validatePassWord(){
    short password;
	do {
		cout << "\n\tPlease enter your password here: ";
		cin >> password;
		if (password == passCode){
            cout << "\n\tYou have entered a correct passcode.";
		}
		else {
			cout << "\n\tYou have not entered a correct passcode. Please try again: ";
        return validatePassWord();
		}
	}
	while (password != passCode);

	return ;

}

void Account::changePassCode(){
	short confirmPassCode;
	short newPassCode;
    do {
		cout << "\n\tPlease enter your passcode here: ";
		cin >> confirmPassCode;
		if (confirmPassCode == passCode) {
			cout << "\n\tPlease enter your new passcode here: ";
			cin >> newPassCode;
			cout << "\n\tPlease re-enter your new passcode here: ";
			cin >> passCode;
            cout << "\n\tYour passcode has been changed\n";
		}else {
			cout << "\n\tYou have entered the wrong passcode, please try again: \n";
			return changePassCode();
		}
    }
	while (confirmPassCode == passCode);





}


#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account {
// set up our inheritance
protected:
	short passCode;
	bool validatePassCode(short pin);
	bool accountPremium;


public:
Account(bool premium, short password);
void validatePassWord();
void changePassCode();


};

#endif


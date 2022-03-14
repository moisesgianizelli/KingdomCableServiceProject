#include "Account.h"


class Television : public Account {

private:
	string sportsChannel;
	int numbOfChannels;
	string accType;
	float monthlyCost;
	bool channelLocked;
	float owesDue;
	float amountOwing;
    bool payPerView;
	bool upgradeAcc;
    string ppvOnOff;

public:
	void lockChannel();
	void payPerViewActivation();
	void printTelevisionDetails();
	void upgradeTvAcc();
	Television(bool premium, short password);


};

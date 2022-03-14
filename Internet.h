#include "Account.h"

class Internet : public Account {

private:

    float downloadSpeed;
	bool kidssRestriction;
	float uploadSpeed;
	float internetSpeed;
	string accType;
	float monthlyCost;
	char upgradeAcc;
	int amountOwe;



public:
    Internet(bool premium, short password);
	void changeKidsRestriction();
	void upgradePlan();
    void printInternetDetails();
    void setPremium(bool premium);

};

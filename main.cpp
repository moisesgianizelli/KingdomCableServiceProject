/* Written by Moises Gianizelli
Cork College Of Commerce
Assignment 2 - Kingdom Cable Service Internet and Television account
Last Update: 13/03/2022
*/

#include <iostream>
#include "Internet.h"
#include "Account.h"
#include "Television.h"


using namespace std;

// Create my menus


int getMenuInternetOption() {
    int keyboardInput;
    short pinInternet;
	cout << "\n\tWhat option for internet you want?" << "\n" << "\t1. REGULAR | 2. PREMIUM\n";
	cin >> keyboardInput;
	if (keyboardInput > 2){
       cout << "\n\tIts not a valid option. Please type 1 or 2\n";
        return getMenuInternetOption();}
	else{

	    cout << "\n\tDigit your pin for internet: ";
        cin >> pinInternet;
        if (pinInternet == 1234){
            return keyboardInput;
        } else {
            cout << "\n\tInvalid input\n";
            return getMenuInternetOption();}

	}


}

int getMenuTVtOption() {
    int keyboardInput;
    short pinTV;
	cout << "\n\tWhat option for TV you want?" << "\n" << "\t1. REGULAR | 2. PREMIUM\n";
	cin >> keyboardInput;
		if (keyboardInput > 2){
       cout << "\n\tIts not a valid option. Please type 1 or 2\n";
        return getMenuTVtOption();}
	else{

	    cout << "\n\tDigit your pin for TV: ";
        cin >> pinTV;
        if (pinTV == 2222){
            return keyboardInput;
        } else {
            cout << "\n\tInvalid input\n";
            return getMenuTVtOption();}

	}

}

int getServiceOptionMenu() {
    int keyboardInput;
    cout << "\n\tChoose what service you want to set up";
	cout << "\n\t1. INTERNET | 2. TV | 3. EXIT\n";
	cin >> keyboardInput;
	if (keyboardInput > 3){
       cout << "\n\tIts not a valid option. Please type 1, 2 or 3\n";
       return getServiceOptionMenu();
	}
	else{
	return keyboardInput;}
}



int getMenu3InternetResponse() {
    int keyboardInput;
	cout << "\n\t1. Print Account Details"  << "\n\t2. Kids restrictions"  << "\n\t3. Upgrade"  << "\n\t4. Change password" <<  "\n\t5. Exit this menu\n";
	cin >> keyboardInput;
	if(keyboardInput > 5){
        cout << "\n\tIt is not  a valid choice. Please type a option [1 - 5]\n";
        return getMenu3InternetResponse();
	} else {
	return keyboardInput;

}
}
int getMenu3TvResponse() {
    int keyboardInput;
	cout << "\n\t1. Print Account Details" << "\n" << "\t2. Lock Channels" << "\n" << "\t3. Upgrade" << "\n" << "\t4. Pay Per View" << "\n" << "\t5. Change passcode" << "\n" << "\t6. Exit\n";
	cin >> keyboardInput;
	if(keyboardInput > 6){
        cout << "\n\tIt is not  a valid choice. Please type a option [1 - 6]\n";
        return getMenu3TvResponse();
	} else {
	return keyboardInput;
}
}

// Initialize my program
int main() {
    cout << "\t***KINGDOM CABLE SERVICE***\n\n";
	int  internetOption = getMenuInternetOption();
	int  TVOption = getMenuTVtOption();
	int serviceOption = 0;
	bool internetPremium;
	if (internetOption == 1) {
        internetPremium = false;
	}
	else if (internetOption == 2) {
        internetPremium = true;
	}
	bool TVPremium;
	if (TVOption == 1) {
        TVPremium = false;
	}
	else if (TVOption == 2) {
        TVPremium = true;
	}
	Internet internet(internetPremium, 1234);
	Television television (TVPremium, 2222);
	Account account();
	do {
        serviceOption = getServiceOptionMenu();
		if (serviceOption != 3) {
            int menu3Response = 0;
			do {
				if (serviceOption == 1) {
					menu3Response = getMenu3InternetResponse();


					if (menu3Response == 1) {
						internet.printInternetDetails();
					} else if (menu3Response == 2) {
					    internet.changeKidsRestriction();

					} else if (menu3Response == 3) {
                        internet.upgradePlan();
					}
					 else if (menu3Response == 4) {
                        internet.changePassCode();
                       }

				} else if (serviceOption == 2) {
					menu3Response = getMenu3TvResponse();
                    if (menu3Response == 1) {
						television.printTelevisionDetails();
					} else if (menu3Response == 2) {
					    television.lockChannel();

					} else if (menu3Response == 3) {
                        television.upgradeTvAcc();
					} else if (menu3Response == 4) {
                       television.payPerViewActivation();
                    } else if (menu3Response == 5){
                    television.changePassCode();}
				}
			} while ((serviceOption == 1 && menu3Response != 5) || (serviceOption == 2 && menu3Response != 6));
		}


	} while (serviceOption != 3);

	cout << "\n\t\tThanks for using Kingdom Cable Service. See you soon.";
}

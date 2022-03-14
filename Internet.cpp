#include "Internet.h"
#include <iostream>

using namespace std;


Internet::Internet(bool premium, short password) : Account (premium, password)
{
    if (premium == true) {
        accType = "Premium";
        amountOwe = 50;
        downloadSpeed = 23.9;
        uploadSpeed = 3.8;
        monthlyCost = 50;
        upgradeAcc = true;
    }
    else {
        accType = "Regular";
        amountOwe = 35;
        downloadSpeed = 15.6;
        uploadSpeed = 2.97;
        monthlyCost = 35;
    }
    kidssRestriction = false;

}



void Internet::printInternetDetails(){
    string restrictionsOn;
    if (kidssRestriction == true) {
        restrictionsOn = "On";
    }
    else if (kidssRestriction == false) {
        restrictionsOn = "Off";
    }

    cout << "\n\tAccount type: " << accType
         << "\n\tOwes: " << amountOwe
         << "\n\tMonthly cost: " << monthlyCost
         << "\n\tDownload Speed: " << downloadSpeed
         << "\n\tUpload Speed: "  << uploadSpeed
         << "\n\tKids Restriction: " << restrictionsOn << "\n\n";
        // testing purpose only<< "\n\tpassword" << passCode << "\n";

}


void Internet::upgradePlan()
{

    char choice;
    do
    {
        if (upgradeAcc == false)
        {
            cout << "\n\tDo you want to Upgrade your account ?[Y/N]\n";
            cin>> choice;
            validatePassWord();

            switch (choice)
            {
            case 'Y':
            case 'y':
                cout << "\n\tCongratulations !! Now you have premium package.\n";
                upgradeAcc = true;
                accType = "Premium";
                monthlyCost = 50;
                uploadSpeed = 3.8;
                downloadSpeed = 23.9;
                kidssRestriction = false;
                return;}

            }else if (upgradeAcc == true){
                cout << "\n\tYou already have premium account\n";
                return;

            }



    }
    while (toupper(choice) == 'Y');
}

void Internet::changeKidsRestriction()
{
    char choice;
    do
    {
        if (kidssRestriction == false)
        {
            cout << "\n\tDo you want to change kids restrictions?[Y,N]\n";
            cin>> choice;
            validatePassWord();
            switch (choice)
            {
            case 'Y':
            case 'y':
                cout << "\n\t\tKids restrictions are now On\n";
                kidssRestriction = true;
                return;
            }
        }else if (kidssRestriction == true){
            cout << "\n\tDo you want to change kids restrictions?[Y,N]\n";
            cin>> choice;
            validatePassWord();
            switch (choice)
            {
            case 'Y':
            case 'y':
                cout << "\n\t\tKids restrictions are now Off\n";
                kidssRestriction = false;
                return;

            }
    }
}

    while (toupper(choice) == 'Y');
}






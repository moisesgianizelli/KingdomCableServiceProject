#include "Television.h"
#include <iostream>

using namespace std;

Television::Television(bool premium, short password) : Account (premium, password)
{
    if (premium == true) {
        accType = "Premium";
    }
    else if (premium == false) {
        accType = "Regular";
    }
        if (premium == true) {
        accType = "Premium";
        owesDue = 40.0;
        numbOfChannels = 200;
        amountOwing = 40.0;
        sportsChannel = ("Yes");
        payPerView = ("No");
        upgradeAcc = true;
        channelLocked = false;
    }
    else {
        accType = "Regular";
        owesDue = 25.0;
        numbOfChannels = 100;
        amountOwing = 25.0;
        sportsChannel = ("No");
        payPerView = ("No");
        channelLocked = true;
    }

    payPerView = false;
}


void Television::printTelevisionDetails()
{
    string ppvOnOff;

    if (payPerView == true) {
         ppvOnOff = "On";
    }
    else if (payPerView == false) {
         ppvOnOff = "Off";
    }



    string locked;
    if (channelLocked == true) {
        locked = "True";
    }
    else {
        locked = "False";
    }
    cout << "\n\tAccount type: " << accType
         << "\n\tOwes: " << owesDue
         << "\n\tNumber Of Channels: " << numbOfChannels
         << "\n\tAmount Owing: " << amountOwing
         << "\n\tSports Channel: "  << sportsChannel
         << "\n\tPay Per View: " << ppvOnOff << "\n";
       //  << "\n\tPasscode: " << passCode;

}


void Television::payPerViewActivation()
{
    char choice;
    do
    {



        if (payPerView == false)
        {
            cout << "\n\tWould you like to sign up for Pay Per View??[Y,N]";
            cin>> choice;
            validatePassWord();
            switch (choice)
            {
            case 'Y':
            case 'y':
                cout << "\n\tYou Pay per view subscription is now active\n\n";
                payPerView = true;
                if (accType == (("Regular")))
                {
                    owesDue += 10;
                    amountOwing += 10;
                    return;
                }
                else (accType == (("Premium")));
                    owesDue += 10;
                    amountOwing += 10;
                return;
            }
        }
    }
    while (toupper(choice) == 'Y');
}


void Television::lockChannel(){

        char choice;
        do
        {
            if (accType == "Regular" && channelLocked == true)
            {
                cout << "\n\tDo you want to lock channels?[Y/N]\n";
                cin>> choice;
                validatePassWord();
                switch (choice)
                case 'Y':
                case 'y':
                    cout << "\n\tChannels between 90 and 100 now are locked\n";
                    channelLocked = true;
                        numbOfChannels -= 10;
                        return;}
             else if (accType == "Premium" && channelLocked == true){
                cout << "\n\tDo you want LOCK the channels?";
                cin >> choice;
                validatePassWord();
                switch (choice)
                case 'Y':
                case 'y':
                    cout << "\n\tChannels between 180 and 200 now are locked\n";
                    numbOfChannels -= 20;
                    channelLocked = false;

                    return;
                }
                 else if (accType == "Regular" && channelLocked == false){
                cout << "\n\tDo you want unlock the channels?";
                cin >> choice;
                validatePassWord();
                switch (choice)
                case 'Y':
                case 'y':
                    cout << "\n\tChannels between 90 and 100 now are locked\n";
                    numbOfChannels += 10;
                    channelLocked = false;

                    return;
                }
                 else if (accType == "Premium" && channelLocked == false){
                cout << "\n\tDo you want UNLOCK the channels?";
                cin >> choice;
                validatePassWord();
                switch (choice)
                case 'Y':
                case 'y':
                    cout << "\n\tChannels between 180 and 200 now are unlocked\n";
                    numbOfChannels += 20;
                    channelLocked = true;

                    return;
                }

}
while (toupper(choice) == 'Y');

}

void Television::upgradeTvAcc()
{
//    this->premium = true;
//    this->NumberOfChannels = 200;
//    this->SportsChannels = true;
//}

char choice;
    do
    {
        if (upgradeAcc == false)
        {
            cout << "\n\tDo you want to Upgrade your account ?[Y/N]/n";
            cin>> choice;
            validatePassWord();

            switch (choice)
            {
            case 'Y':
            case 'y':
                cout << "\n\tCongratulations !! Now you have premium package.\n";
                upgradeAcc = true;
                accType = "Premium";
                owesDue = 40.0;
                numbOfChannels = 200;
                amountOwing = 40.0;
                sportsChannel = ("Yes");
                payPerView = ("No");
                return;}

            }else if (upgradeAcc == true){
                cout << "\n\tYou already have premium account\n";
                return;

            }

    }
    while (toupper(choice) == 'Y');
}






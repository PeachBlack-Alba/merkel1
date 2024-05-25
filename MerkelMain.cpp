#include "MerkelMain.h"
#include <iostream>


MerkelMain::MerkelMain()
{}

void MerkelMain::init()
{
        int input;
        while(true)
        {
                printMenu();
                input = getUserOption();
                processUserOption(input);
        }
}

 void MerkelMain::printMenu(){
        // 1 print help
        std::cout << "1: Print help" << std::endl;

        // 2 print exchange stats
        std::cout << "2: Print exchange stats" << std::endl;

        // 3 make an offer
        std::cout << "3: Make an offer" << std::endl;

        // 4 make a bid
        std::cout << "4: Make a bid" << std::endl;

        // 5 print wallet
        std::cout << "5: Print wallet" << std::endl;

        // 6 continue
        std::cout << "6: Continue" << std::endl;

        // Select an option
        std::cout << "=========== " << std::endl;
}


void MerkelMain::printHelp(){
   std::cout << "Help - choose options from the menu" << std::endl;
   std::cout << "and follow the on screen instructions." << std::endl;
}

void MerkelMain::printMarketStats(){
        std::cout << "Market looks good" << std::endl;

}

void MerkelMain::enterOffer(){
        std::cout << "Make an offer - enter the amount" << std::endl;
}

void MerkelMain::enterBid(){
        std::cout << "Make a bid - enter the amount" << std::endl;

}

void MerkelMain::printWallet (){
        std::cout << "Your wallet is empty" << std::endl;

}

void MerkelMain::goToNextTimeFrame (){
        std::cout << "Going to next ime frame." << std::endl;
}



int MerkelMain::getUserOption(){
        int userOption;
        std::cout << "Type in 1-6 " << std::endl;
        std::cin >> userOption;
        std::cout << "You chose:" << userOption << std::endl;
        return userOption;
}


void MerkelMain::processUserOption(int userOption){
        if(userOption == 0){
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
        }
        if(userOption == 1){
        printHelp();
        }
        if(userOption == 2){
        printMarketStats();
        }
        if(userOption == 3){
        enterOffer();
        }
        if(userOption == 4){
                enterBid();
        }
        if(userOption == 5){
                printWallet();
        }
        if(userOption == 6){
                goToNextTimeFrame();
        }

}
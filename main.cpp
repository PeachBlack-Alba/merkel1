#include <iostream>
#include <string>

void printMenu(){
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


void printHelp(){
   std::cout << "Help - choose options from the menu" << std::endl;
   std::cout << "and follow the on screen instructions." << std::endl;
}

void printMarketStats(){
        std::cout << "Market looks good" << std::endl;

}

void enterOffer(){
        std::cout << "Make an offer - enter the amount" << std::endl;
}

void enterBid(){
        std::cout << "Make a bid - enter the amount" << std::endl;

}

void printWallet (){
        std::cout << "Your wallet is empty" << std::endl;

}

void goToNextTimeFrame (){
        std::cout << "Going to next ime frame." << std::endl;
}



int getUserOption(){
        int userOption;
        std::cout << "Type in 1-6 " << std::endl;
        std::cin >> userOption;
        std::cout << "You chose:" << userOption << std::endl;
        return userOption;
}


void processUserOption(int userOption){
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

int main()
{
        double price = 5319.450228;
        double amount = 0.00020075;
        // This is declaring a new variable and the type is standard String but the syntax to define is std::string
        std::string timestamp {"2020/03/17 17:01:24.884492"}; 
        std::string product {"BTC/USDT"}; 
        // std::string orderType {"bid"}; this is not the best way to do it because the type can be bid or ask
        // better use an enum 
        enum class OrderBookType{bid, ask}; 
        


    // Make iteration so the conversation does not end when user sets 1 response 
    while (true) {
     
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    } 
    return 0;
}
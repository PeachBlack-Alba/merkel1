#include <iostream>
#include <string>
#include <vector>

        enum class OrderBookType{bid, ask}; 

        class OrderBookEntry{
                // make all this data public for now, and which means that we can access the data from outside of the class
                public: 

                OrderBookEntry(

                        double _price,
                        double _amount,
                        std::string _timestamp,
                        std::string _product,
                        OrderBookType _orderType)
                // initialisation list
                : price(_price),
                amount(_amount),
                timestamp(_timestamp),
                product(_product),
                orderType(_orderType)

                {
        
                }

                double price;
                double amount;
                std::string timestamp;
                std::string product;
                OrderBookType orderType;

        };


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
        // double price = 5319.450228;
        // double amount = 0.00020075;
        // // This is declaring a new variable and the type is standard String but the syntax to define is std::string
        // std::string timestamp {"2020/03/17 17:01:24.884492"}; 
        // std::string product {"BTC/USDT"}; 
        // // std::string orderType {"bid"}; this is not the best way to do it because the type can be bid or ask
        // // better use an enum 
        // // then how we store the variable?
        // OrderBookType orderType = OrderBookType::bid;
        // // So what I've done, is I've successfully constrained the possible range of values for that data there. 

        
//         std::vector<double> prices;
//         std::vector<double> amounts;
//         std::vector<std::string> timestamps;
//         std::vector<std::string> products;
//         std::vector<OrderBookType> orderTypes;

//         prices.push_back(50000.01);
//         amounts.push_back(0.001);
//         timestamps.push_back("2020/03/17 17:01:24.884492");
//         products.push_back("BTC/USDT");
//         orderTypes.push_back(OrderBookType::bid);

//         std::cout<<"prices:" <<prices[0] << std::endl;


//     // Make iteration so the conversation does not end when user sets 1 response 
//     while (true) {
     
//         printMenu();
//         int userOption = getUserOption();
//         processUserOption(userOption);
//     } 
//     return 0;

        //we've created a vector of type that can store multiple order book entries and we called it orders, 
        // then we created a variable, and we've chucked that, passed a variable onto the vector.         orders.push_back(order1);

        std::vector<OrderBookEntry> orders;

        // This order1 is an object that is an insatnce of the class OrderBookEntry
        // OrderBookEntry order1{10000,0.002 , "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid};

        orders.push_back(OrderBookEntry {10000,0.002 , "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});
        
        for (unsigned int i = 0; i < orders.size() ; ++i)
        {
                std::cout << "The price is" <<orders.at(i).price << std::endl;
        }

}
#include <iostream>
#include <string>
#include <vector>
//#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include "CSVReader.h"


int main()
{
        //MerkelMain app{};
        // app.init();
        CSVReader reader;

}


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

        // std::vector<OrderBookEntry> orders;

        // // This order1 is an object that is an insatnce of the class OrderBookEntry
        // // OrderBookEntry order1{10000,0.002 , "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid};

        // orders.push_back(OrderBookEntry {10000,0.002 , "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});
        
        // for (unsigned int i = 0; i < orders.size() ; ++i)
        // {
        //         std::cout << "The price is" <<orders.at(i).price << std::endl;
        // }


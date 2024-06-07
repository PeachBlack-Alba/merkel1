// This file contains the specification
#include <string>

        enum class OrderBookType{bid, ask, unknown}; 

        class OrderBookEntry{
                // make all this data public for now, and which means that we can access the data from outside of the class
                public: 

                OrderBookEntry(

                        double _price,
                        double _amount,
                        std::string _timestamp,
                        std::string _product,
                        OrderBookType _orderType);

                static OrderBookType stringToOrderBookType(std::string s);

                double price;
                double amount;
                std::string timestamp;
                std::string product;
                OrderBookType orderType;

        };
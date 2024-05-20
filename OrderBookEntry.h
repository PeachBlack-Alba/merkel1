#include <string>

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
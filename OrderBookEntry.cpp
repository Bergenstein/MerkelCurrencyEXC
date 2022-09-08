#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(std::string _product,
                               std::string _timestamp,
                               double _price,
                               double _amount,
                               OrderBookType _orderType)
:
product(_product),
timestamp(_timestamp),
price(_price),
amount(_amount),
orderType(_orderType)
{
    std::string product;
    std::string timestamp;
    double price;
    double amount;
    OrderBookType orderType;
}


#pragma once
#include <string>
#include <vector>

enum class OrderBookType { ask, bid, sale, other };
class OrderBookEntry {
public:
  OrderBookEntry(std::string _product, std::string _timestamp, double _price,
                 double _amount, OrderBookType _orderType);
  std::string product;
  std::string timestamp;
  double price;
  double amount;
  OrderBookType orderType;
  std::vector<OrderBookEntry> orders;
  static OrderBookType stringToOrderBookType(std::string _str);
};
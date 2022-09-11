#pragma once
#include "OrderBookEntry.h"
#include <string>
#include <vector>

class CSVReader {
public:
  CSVReader(std::string _file);
  static std::vector<std::string> tokenize(std::string _file, char _separator);
  OrderBookEntry stringsToOBE(std::string _product, std::string _timestamp,
                              std::string _price, std::string _amount,
                              OrderBookType _orderType);
  std::vector<OrderBookEntry> readCSV(std::string _file);
  static OrderBookType stringToOrderBookType(std::string _str);

private:
  std::vector<OrderBookEntry> orders;
  static OrderBookEntry stringsToOBE(std::vector<std::string> _strs);
};
#include "CSVReader.h"
#include <fstream>
#include <iostream>

CSVReader::CSVReader(std::string _file) {
  // std::string file="20200317.csv";
}
std::vector<std::string> CSVReader::tokenize(std::string _file,
                                             char _separator) {
  std::vector<std::string> tokens;
  std::string token;
  signed int start, end;

  start = _file.find_first_not_of(_separator, 0);
  do {
    end = _file.find_first_of(_separator, start);
    if (start == end || start == _file.length())
      break;
    if (end > 0)
      token = _file.substr(start, end - start);
    else
      token = _file.substr(start, end - start);
    tokens.push_back(token);
    start = end + 1;
  } while (end > 0);

  return tokens;
}
OrderBookEntry CSVReader::stringsToOBE(std::string _product,
                                       std::string _timestamp,
                                       std::string _price, std::string _amount,
                                       OrderBookType _orderType) {
  double price, amount;
  try {
    price = std::stod(_price);
    amount = std::stod(_amount);
  } catch (const std::exception &e) {
    //
  }
  OrderBookEntry obe{_product, _timestamp, price, amount, _orderType};
  return obe;
}

std::vector<OrderBookEntry> CSVReader::readCSV(std::string _file) {
  std::vector<OrderBookEntry> orders;
  std::vector<std::string> tokens;
  std::string line;
  std::ifstream fileStream{_file};
  if (fileStream.is_open()) {

    while (std::getline(fileStream, line)) {
      tokens = tokenize(line, ',');
      OrderBookEntry obe = stringsToOBE(tokens);
      orders.push_back(obe);
    }
  }

  return orders;
}

OrderBookEntry CSVReader::stringsToOBE(std::vector<std::string> _strs) {

  if (_strs.size() != 5)
    throw std::exception{};

  double price, amount;
  try {
    price = std::stod(_strs[3]);
    amount = std::stod(_strs[4]);
  } catch (const std::exception &e) {
    //
  }
  OrderBookEntry obe{_strs[1], _strs[0], price, amount,
                     OrderBookEntry::stringToOrderBookType(_strs[2])};

  return obe;
}

// std::string _product, std::string _timestamp, double _price,
//                  double _amount, OrderBookType _orderType

// 2020/03/17 17:01:24.884492,ETH/BTC,ask,0.02196,0.0199982

#include "MerkelMain.h"
#include <iostream>

MerkelMain::MerkelMain() {}

void MerkelMain::init() {
  loadOrderBook();
  printMenu();
  int userOption;
  while (true) {
    userOption = getUserOption();
    processUserOption(userOption);
  }
}

void MerkelMain::loadOrderBook() {
  OrderBookEntry obe{"BTC/USDT", "2020/03/17 17:01:24.884492", 2, 3,
                     OrderBookType::bid};
  orders.push_back(obe);
}
void MerkelMain::printMenu() {
  // 1 print help
  std::cout << "1: Print help " << std::endl;
  // 2 print exchange stats
  std::cout << "2: Print exchange stats" << std::endl;
  // 3 make an offer
  std::cout << "3: Make an offer " << std::endl;
  // 4 make a bid
  std::cout << "4: Make a bid " << std::endl;
  // 5 print wallet
  std::cout << "5: Print wallet " << std::endl;
  // 6 continue
  std::cout << "6: Continue " << std::endl;

  std::cout << "============== " << std::endl;
}

void MerkelMain::printMarketStats() {
  std::cout << "OrderBook contains: " << orders.size() << std::endl;
}
void MerkelMain::printHelp() {
  std::cout << "Help - your aim is to make money. Analyse the market and make "
               "bids and offers. "
            << std::endl;
}
void MerkelMain::enterAsk() {
  std::cout << "Mare an ask - enter the amount " << std::endl;
}
void MerkelMain::enterBid() {
  std::cout << "Make a bid - enter the amount" << std::endl;
}
void MerkelMain::printWallet() {
  std::cout << "Your wallet is empty. " << std::endl;
}
void MerkelMain::gotoNextTimeframe() {
  std::cout << "Going to next time frame. " << std::endl;
}
int MerkelMain::getUserOption() {
  int userOption;

  std::cout << "Type in 1-6" << std::endl;
  std::cin >> userOption;
  std::cout << "You chose: " << userOption << std::endl;
  return userOption;
}
void MerkelMain::processUserOption(int userOption) {
  if (userOption == 0) // bad input
  {
    std::cout << "Invalid choice. Choose 1-6" << std::endl;
  }
  if (userOption == 1) // bad input
  {
    printHelp();
  }
  if (userOption == 2) // bad input
  {
    printMarketStats();
  }
  if (userOption == 3) // bad input
  {
    enterAsk();
  }
  if (userOption == 4) // bad input
  {
    enterBid();
  }
  if (userOption == 5) // bad input
  {
    printWallet();
  }
  if (userOption == 6) // bad input
  {
    gotoNextTimeframe();
  }
}

void MerkelMain::initialize() {

  while (true) {
    int userOption;
    printMenu();
    launchOrderBook();
    userOption = getUserOption();
    processUserOption(userOption);
  }
}

void MerkelMain::launchOrderBook() {
  // put orders inside of the orderbook vector
  // call the constructor to create an OBE
  OrderBookEntry obe{"DOGE/BTC", "2020/03/17 17:01:24.884492", 17737965.333333,
                     0.00000006, OrderBookType::ask};
  OrderBookEntry obe2{"DOGE/BTC", "2020/03/17 17:01:24.884492", 17737965.333333,
                     0.00000006, OrderBookType::bid};

  orders.push_back(obe);
  orders.push_back(obe2);
}
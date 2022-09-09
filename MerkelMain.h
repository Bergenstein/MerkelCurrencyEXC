#pragma once
#include "OrderBookEntry.h"
#include <string>
#include <vector>

class MerkelMain {
  public:
    MerkelMain();
    void init();
  private:
    /**generate OrderBookEntry objects by calling its constructor
    and pushes them back to a vector. 
    called from init once the sim is initialized
    */
    void loadOrderBook();
    void printMenu();
    void printHelp();
    void enterAsk();
    void enterBid();
    void printWallet();
    void printMarketStats();
    void gotoNextTimeframe();
    int getUserOption();
    void processUserOption(int userOption);
    std::vector<OrderBookEntry>orders;
};

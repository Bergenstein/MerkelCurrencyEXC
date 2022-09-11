#pragma once
#include "OrderBookEntry.h"
#include <string>
#include <vector>
#include "CSVReader.h"

class MerkelMain {
  public:
    MerkelMain();
    void init();
    void initialize();
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
    void launchOrderBook();
    CSVReader reader{"20200317.csv"};
    
};

#pragma once
#include "OrderBookEntry.h"
#include <string>
#include <vector>

class MerkelMain {
public:
  MerkelMain();
  void init();
  void printMenu();
  void printHelp();
  void enterAsk();
  void enterBid();
  void printWallet();
  void printMarketStats();
  void gotoNextTimeframe();
  int getUserOption();
  void processUserOption(int userOption);
};

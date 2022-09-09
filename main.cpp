#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include <iostream>

OrderBookEntry obe{"BTC/USDT", "2020/03/17 17:01:24.884492", 2, 3,
                   OrderBookType::bid};



int main(void) {
  MerkelMain app{}; //calling the constructor and building the app
  app.init(); //initializing and running the app

  return 0;
}

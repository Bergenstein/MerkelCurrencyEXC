#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include <iostream>

OrderBookEntry obe{"BTC/USDT", "2020/03/17 17:01:24.884492", 2, 3,
                   OrderBookType::bid};



int main() {
  MerkelMain app{};
  app.init();

  return 0;
}

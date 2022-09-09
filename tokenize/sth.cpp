 // std::vector<std::string>tokens;
  // double price, amount;
  // std::ifstream file_stream{"20200317.csv"};
  // std::string line;
  // while(std::getline(file_stream, line))
  //   {
  //     tokens=tokenize(line, ',');
  //     try 
  //       {
  //         price = std::stod(tokens[4]);
  //         amount = std::stod(tokens[3]);  
  //       }
  //       catch(const std::exception& e)
  //       {
  //         std::cout<<"couldn't convert to double. "<<std::endl;
  //       }
  //     for(const std::string& token : tokens)
  //       {
  //         std::cout<<"the token is: "<<token<<std::endl;
  //       }
  //   }
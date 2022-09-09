#include <iostream>
#include <string>
#include <vector>
#include <fstream>



std::vector<std::string> tokenize(std::string _file, char _separator);

int main(void) {
 std::vector<std::string>tokens;
  double price, amount;
  std::ifstream file_stream{"20200317.csv"};
  std::string line;
  while(std::getline(file_stream, line))
    {
      tokens=tokenize(line, ',');
      try 
        {
          price = std::stod(tokens[4]);
          amount = std::stod(tokens[3]);  
        }
        catch(const std::exception& e)
        {
          std::cout<<"couldn't convert to double. "<<std::endl;
        }
      for(const std::string& token : tokens)
        {
          std::cout<<"the token is: "<<token<<std::endl;
        }
    }
  return 0;
}

std::vector<std::string> tokenize(std::string _file, char _separator) {
  std::vector<std::string> tokens;
  std::string token;

  signed int start, end;
  start = _file.find_first_not_of(_separator, 0);
  do 
    {
      end=_file.find_first_of(_separator, start);
      if(start==end || start==_file.length()) break;
      if(end>0) token=_file.substr(start, end-start);
      else token=_file.substr(start, _file.length());
      tokens.push_back(token);
      start=end+1;
    }
  while(end>0);
  return tokens;
}
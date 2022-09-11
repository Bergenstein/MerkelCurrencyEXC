// #include <iostream>
// #include <string>
// #include <vector>

// std::vector<std::string> tokenize(std::string _file, char separator);

// int main(void) {
//   std::string token = ",,Hazhar, Havre, Rahim, Hazhir, Kobra,,";
//   std::vector<std::string> tokens = tokenize(token, ',');
//   for (const std::string &token : tokens) {
//     std::cout << "the token is: " << token << std::endl;
//   }
//   for (int i = 0; i < tokens.size(); ++i) {
//     std::cout << "our token is: " << tokens[i] << std::endl;
//     // std::cout<<"again token is: "<<tokens.[i]<<std::endl;
//   }
//   return 0;
// }

// std::vector<std::string> tokenize(std::string _file, char _separator) {
//   std::vector<std::string> tokens;
//   std::string token;
//   signed int start, end;

//   start = _file.find_first_not_of(_separator, 0);

//   do {
//     end = _file.find_first_of(_separator, start);
//     if (start == end || start == _file.length())
//       break;
//     if (end > 0)
//       token = _file.substr(start, end - start);
//     else
//       token = _file.substr(start, _file.length() - start);
//     tokens.push_back(token);
//     start = end + 1;
//   } while (end > 0);
//   return tokens;
// }
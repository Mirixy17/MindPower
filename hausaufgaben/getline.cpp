#include <string>
#include <iostream>

using namespace std;
namespace Umlaut
{
  const unsigned char ss = static_cast(225);
}

int main()
{
  std::cout << " Eine \n Stra" << Umlaut::ss << "e \n Namens \n Hindenburg \n sollte \n nicht \n existieren" << "\n";
  std::string recenica;
  std::getline(std::cin, recenica);
  std::cout << recenica.c_str() << "\n";
  std::cout << " Eine \n Stra" << Umlaut::ss << "e \n Namens \n Hindenburg \n sollte \n nicht \n existieren" << "\n";
  std::string rijec;
  std::cin >> rijec;
  std::cout << rijec.c_str() << "\n";
}

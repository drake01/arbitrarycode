#include <locale>
#include <iostream>

int main()
{
  //std::locale loc;
  //std::cout << loc.name() << std::endl;
    std::locale::global(std::locale("German"));
    std::locale loc;
    std::cout << loc.name()<<std::endl;
}

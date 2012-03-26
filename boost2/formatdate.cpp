#include <string> 
#include "boost/format.hpp"
#include <iostream>

int main()
{
    std::string a("20040531");
    std::cout << boost::format("%1%.%2%.%3%") 
                    % a.substr(0,4) % a.substr(4,2) % a.substr(6,2);
}

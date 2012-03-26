#include <iostream>
#include <fstream>
using namespace std;

ostream_iterator<string> oo (cout);

int main()
{
    *oo = "Hello, ";
    ++oo;
    *oo = "Dunia wallon! \n ";

}

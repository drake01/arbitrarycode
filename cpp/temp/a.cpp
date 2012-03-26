#include <iostream>
#include "a.hpp"
#include <string>
#include <complex>
int main()
{
    int i = 42.3;
    std::cout<<"max(7,i): " << ::max(7,i)<< std::endl;
    double f1 =3.4;
    double f2 = -6.7;
    std::cout<< "max(f1,f2):"<<::max(f1,f2) << std::endl;
    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout<< "max(s1,s2):"<<::max(s1,s2) << std::endl;

    std::complex<float> c1, c2;
   // ::max(c1,c2);
}

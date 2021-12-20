#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    const char *constant("Constant!");
    const char *constant2("Constant2!");
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    ::swap(constant, constant2);
    std::cout << "constant = " << constant << ", constant2 = " << constant2 << std::endl;
    std::cout << "min( constant, constant2 ) = " << ::min( constant, constant2 ) << std::endl;
    std::cout << "max( constant, constant2 ) = " << ::max( constant, constant2 ) << std::endl;
    return 0;
}
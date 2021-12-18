#include "iter.hpp"

int main()
{
    char* tabC = new char[4];
    tabC[0] = 'a';
    tabC[1] = 'b';
    tabC[2] = 'c';
    tabC[3] = '\0';
    int* tabI = new int[4];
    tabI[0] = 1;
    tabI[1] = 2;
    tabI[2] = 3;
    tabI[3] = 4;
    float* tabF = new float[2];
    tabF[0] = 0.2f;
    tabF[1] = 1.5f;
    double* tabD = new double[4];
    tabD[0] = 3.33;
    tabD[1] = 2.45;
    tabD[2] = 8.75;
    tabD[3] = 0.9876;
    
    ::iter(tabC, 3, print);
    ::iter(tabI, 4, print);
    ::iter(tabF, 2, print);
    ::iter(tabD, 4, print);

    delete [] tabC;
    delete [] tabI;
    delete [] tabF;
    delete [] tabD;
}



// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 )
//         {
//             return;
//         }
//         int get( void ) const
//         {
//             return this->_n;
//         }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//     o << rhs.get();
//     return o;
// }

// template< typename T >
// void print( T const & x )
// {
//     std::cout << x << std::endl;
//     return;
// }

// int main() 
// {
//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];// <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }
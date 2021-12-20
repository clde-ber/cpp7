#ifndef ITER_H
#define ITER_H

#include <iostream>

template< typename T >
void printArray(T const & arrayEl)
{
    std::cout << arrayEl << std::endl;
}

template< typename T >
void iter(T* arrayAddress, int len, void (*f)(T const & arrayEl))
{
    for (int i = 0; i < len; i++)
    {
        f(arrayAddress[i]);
    }
}

#endif
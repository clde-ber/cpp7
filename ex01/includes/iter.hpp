#ifndef ITER_H
#define ITER_H

#include <iostream>

template< typename T >
void print(T & arrayEl)
{
    std::cout << arrayEl << std::endl;
}

template< typename T >
void iter(T** arrayAddress, int len, void (*f)(T & arrayEl))
{
    for (int i = 0; i < len; i++)
    {
        f((*arrayAddress)[i]);
    }
}

#endif
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>

template< typename T>
class Array
{
    private:
        T* _array;
        unsigned int _n;
        class OutOfLimitsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Array element exception: out of limits!";
                }
        };
    public:
        Array(void);
        Array(unsigned int n);
        Array(Array const & rhs);
        Array & operator=(Array const & rhs);
        ~Array(void);
        unsigned int size() const;
        T & operator[](unsigned int n);
};

#endif
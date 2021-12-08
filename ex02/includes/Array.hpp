#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template< typename T, unsigned int N >
class Array
{
    private:
        T* const _array;
        class OutOfLimitsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Array element exception: out of limits!";
                }
        };
    public:
        Array(void) {  _array = new T[0]; }
        Array(unsigned int n) { _array = new T[n]; }
        Array(Array const & rhs) : _array(new Array<T, N>(rhs)) {}
        Array const & operator=(Array const & rhs)
        {
            new (this) T(rhs, N);
            return *this;
        }
        ~Array(void) {};
        unsigned int size()
        {
            return N;
        }
        T const & operator[](unsigned int n)
        {
            return this[n];
        }
};

#endif
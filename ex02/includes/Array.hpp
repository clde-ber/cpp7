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
        Array(void) :  _array(new T[0]()), _n(0) {};
        Array(unsigned int n) : _array(new T[n]()), _n(n) {}
        Array(Array const & rhs) : _array(new T[rhs._n]()), _n(rhs._n)
        {
            for (unsigned int i = 0; i < rhs.size(); i++)
		        _array[i] = rhs._array[i];
        }
        Array & operator=(Array const & rhs)
        {
            delete [] _array;
            new (this) Array(rhs);
            return *this;
        }
        ~Array(void)
        {
            if (_array)
            delete [] _array;
        }
        unsigned int size() const
        {
            return _n;
        }
        T & operator[](unsigned int n)
        {
            if (n < 0 or n >= _n)
            throw OutOfLimitsException();
            return _array[n];
        }
};

#endif
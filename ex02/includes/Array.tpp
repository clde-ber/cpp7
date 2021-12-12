#ifndef ARRAY_T
#define ARRAY_T

#include "Array.hpp"

template< typename T, unsigned int N >
Array<T, N>::Array(void) :  _array(new T[N]()), _n(N)
{

}

template< typename T, unsigned int N >
Array<T, N>::Array(unsigned int n) : _array(new T[n]()), _n(n)
{

}

template< typename T, unsigned int N >
Array<T, N>::Array(Array const & rhs) : _array(new T[rhs._n]()), _n(rhs._n)
{

}

template< typename T, unsigned int N >
Array<T, N> & Array<T, N>::operator=(Array const & rhs)
{
    try
	{
		for(unsigned int i = 0; i < rhs.size(); i++)
		{
			if (i >= rhs._n)
				throw OutOfLimitsException();
		}
        for(unsigned int i = 0; i < rhs.size(); i++)
            _array[i] = rhs._array[i];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
        return *this;
	}
    return *this;
}

template< typename T, unsigned int N >
Array<T, N>::~Array(void)
{
    if (_array)
        delete [] _array;
}

template< typename T, unsigned int N >
unsigned int Array<T, N>::size() const
{
    return N;
}

template< typename T, unsigned int N >
T & Array<T, N>::operator[](unsigned int n)
{
    if (n < 0 or n >= N)
        throw OutOfLimitsException();
    return _array[n];
}

#endif
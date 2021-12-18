#ifndef ARRAY_T
#define ARRAY_T

#include <Array.hpp>

template< typename T >
Array<T>::Array(void) :  _array(new T[0]()), _n(0)
{

}

template< typename T >
Array<T>::Array(unsigned int n) : _array(new T[n]()), _n(n)
{

}

template< typename T >
Array<T>::Array(Array const & rhs) : _array(new T[rhs._n]()), _n(rhs._n)
{

}

template< typename T >
Array<T> & Array<T>::operator=(Array const & rhs)
{
	delete this;
	new (this) Array(rhs);
	return *this;
    // try
	// {
	// 	for(unsigned int i = 0; i < rhs.size(); i++)
	// 	{
	// 		if (i >= rhs._n or i >= _n)
	// 			throw OutOfLimitsException();
	// 	}
    //     for(unsigned int i = 0; i < rhs.size(); i++)
    //         _array[i] = rhs._array[i];
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // return *this;
}

template< typename T >
Array<T>::~Array(void)
{
    if (_array)
        delete [] _array;
}

template< typename T >
unsigned int Array<T>::size() const
{
    return _n;
}

template< typename T >
T & Array<T>::operator[](unsigned int n)
{
    if (n < 0 or n >= _n)
        throw OutOfLimitsException();
    return _array[n];
}

#endif
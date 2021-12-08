#include "Array.hpp"

template< typename T, unsigned int N >
Array<T, N>::Array(void)
{
    _array = new T[0];
}

template< typename T, unsigned int N >
Array<T, N>::Array(unsigned int n)
{
    _array = new T[n];
}

template< typename T, unsigned int N >
Array<T, N>::Array(Array const & rhs)
{
    _array = new T(rhs);
}

template< typename T, unsigned int N >
Array<T, N> const & Array<T, N>::operator=(Array const & rhs)
{
    new (this) T(rhs);
    return *this;
}

template< typename T, unsigned int N >
Array<T, N>::~Array(void)
{

}

template< typename T, unsigned int N >
unsigned int Array<T, N>::size()
{
    return N;
}

template< typename T, unsigned int N >
T const & Array<T, N>::operator[](unsigned int n)
{
    return this[n];
}
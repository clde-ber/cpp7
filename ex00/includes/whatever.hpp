#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	return (x <= y ? x : y);
}

template<typename T>
T const &max(T const &x, T const &y)
{
	return (x >= y ? x : y);
}

template< typename T >
std::ostream & operator<<(std::ostream & o, int const & rhs)
{
    o << rhs;
    return o;
}

template< typename T >
std::ostream & operator<<(std::ostream & o, char const & rhs)
{
    o << rhs;
    return o;
}

#endif
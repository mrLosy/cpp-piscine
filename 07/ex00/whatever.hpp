#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

template<typename T>
void swap(T &x, T &y){
	T p = x;
	x = y;
	y = p;
}

template<typename T>
T const & min(T const &x,T const &y){
	return x <= y ? x : y;
}

template<typename T>
T const & max(T const &x,T const &y){
	return x >= y ? x : y;
}

#endif
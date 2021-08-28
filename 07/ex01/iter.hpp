#ifndef ITER_HPP
# define ITER_HPP

#include "iostream"

using std::cout;
using std::endl;
using std::string;

template<typename T>
void iter(T x[], int const &y, void func(T &p)){
	for (int i = 0; i < y; i++)
		func(x[i]);
}

#endif
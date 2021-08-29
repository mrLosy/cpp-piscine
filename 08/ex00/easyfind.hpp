#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class NoSuchElement : public std::exception{
	const char* what() const throw()
	{
		return "Exception: No Such Element!";
	}
};

class InvalidValue : public std::exception{
	const char* what() const throw()
	{
		return "Exception: Invalid Value!";
	}
};

template<typename T>
typename T::iterator easyfind(T &a, int i){
	if (i < 0)
		throw InvalidValue();
	typename T::iterator it = std::find(a.begin(), a.end(), i);
	if (it == a.end())
		throw NoSuchElement();
	return it;
}

#endif
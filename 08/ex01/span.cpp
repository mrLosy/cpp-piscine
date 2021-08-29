#include "span.hpp"

using std::cout;
using std::endl;
using std::string;

span::span(unsigned int i){
	_N = i;
}

span::span(const span &copy){
	*this = copy;
}

span::~span(void){}

span &span::operator=(const span &op){
	_N = op._N;
	_vec = op._vec;
	return *this;
}

void span::addNumber(int num){
	if (_vec.size() >= _N)
		throw span::StorageFull();	
	_vec.push_back(num);
}

void span::addMoreNumber(std::vector<int> vec){
	if (vec.size() > _N)
		throw span::StorageFull();
	_vec.insert(_vec.end(), vec.begin(), vec.end());
}

int span::shortestSpan(void){
	if (_vec.size() <= 1)
		throw span::NoElementsToFind();
	sort(_vec.begin(), _vec.end());
	return (_vec[1] - _vec[0]);
}

int span::longestSpan(void){
	if (_vec.size() <= 1)
		throw span::NoElementsToFind();
	std::vector<int>::iterator min = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::iterator max = std::max_element(_vec.begin(), _vec.end());
	return *max - *min;
}

const char * span::StorageFull::what() const throw(){
	return "Strotage Full!";
}

const char * span::NoElementsToFind::what() const throw(){
	return "No Elements To Find!";
}
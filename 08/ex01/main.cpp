#include "span.hpp"

using std::cout;
using std::endl;

int main(void){
	
	span sp = span(8);

	try{
		cout << sp.shortestSpan() << endl;
	}
	catch(std::exception & e){
		cout << e.what() << endl;
	}

	try{
		cout << sp.longestSpan() << endl;
	}
	catch(std::exception & e){
		cout << e.what() << endl;
	}

	sp.addNumber(1);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(5);
	sp.addNumber(19);
	sp.addNumber(4);
	sp.addNumber(14);
	sp.addNumber(24);

	cout << sp.shortestSpan() << endl;
	cout << sp.longestSpan() << endl;

	try{
		sp.addNumber(5);
	}
	catch(std::exception & e){
		cout << e.what() << endl;
	}
}
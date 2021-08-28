#include "whatever.hpp"

int main(void){
	int a = 12;
	int b = 45;

	cout << "a = " << a << ", b = " << b << endl;
	::swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << ::min( a, b ) << endl;
	cout << "max( a, b ) = " << ::max( a, b ) << endl;

	std::string c = "example";
	std::string d = "example2";

	cout << endl;

	cout << "c = " << c << ", d = " << d << endl;
	::swap(c, d);
	cout << "c = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << ::min( c, d ) << endl;
	cout << "max( c, d ) = " << ::max( c, d ) << endl;
	return 0;
}
#include <string>
#include <iostream>
#include <stdint.h>

class Base{

public:
		virtual ~Base() {}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void){
	srand(time(0));
	int rand = std::rand();
	if (rand % 3 == 2){
		std::cout << "A" << std::endl;
		return new A;
	}
	else if (rand % 3 == 1){
		std::cout << "B" << std::endl;
		return new B;
	}
	std::cout << "C" << std::endl;
	return new C;
}

void identify(Base* p){
	A * a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	B * b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	C * c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	try{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(...){}
	try{
		C & c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(...){}
	try{
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(...){}
}

int main(){
	Base * base = generate();
	std::cout << "\n";
	identify(base);
	std::cout << "\n";
	Base & base1 = *base;
	identify(base1);
}
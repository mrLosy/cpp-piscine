#include "Bureaucrat.hpp"

int main(){
	try {
	Bureaucrat bur("Vasya", 14);

	bur.incrementGrade();
	cout << bur << endl;

	bur.decrementGrade();
	cout << bur << endl;

	// Bureaucrat bur1("Vasya", 150);

	// bur1.decrementGrade();
	// cout << bur1 << endl;

	// Bureaucrat bur2("Vasya", 0);
	}
	catch(std::exception& e){
		cout << e.what() << endl;
	}
}
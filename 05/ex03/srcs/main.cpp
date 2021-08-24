#include "../includes/Intern.hpp"

int main(){
	try {
	Bureaucrat vasya("Vasya", 1);
	Intern intern;
	Form *ptr;
	ptr = intern.makeForm("presidential pardon", "Bender");
	vasya.signForm(*ptr);
	ptr->execute(vasya);
	}
	catch(std::exception& e){
		cout << e.what() << endl;
	}
}
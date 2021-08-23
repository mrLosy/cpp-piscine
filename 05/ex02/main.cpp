#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try {
	Bureaucrat bur("Vasya", 14);
	Form tur("Deklaracia ebanaya", 46, 46);
	
	cout << tur;
	bur.signForm(tur);
	// Form tur1("Dokumentik", 46, 46);
	// Bureaucrat bur1("Ivan", 150);

	// bur1.signForm(tur1);

	// Bureaucrat bur2("Vasya", 0);
	}
	catch(std::exception& e){
		cout << e.what() << endl;
	}
}
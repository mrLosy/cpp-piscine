#include "../Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	try {
	Bureaucrat vasya("Vasya", 14);
	RobotomyRequestForm form1("A1");
	vasya.signForm(form1);
	form1.execute(vasya);
	
	cout << endl;

	ShrubberyCreationForm form2("A2");
	vasya.signForm(form2);
	form2.execute(vasya);
	
	cout << endl;

	PresidentialPardonForm form3("A3");
	Bureaucrat god("God", 1);
	god.signForm(form3);
	form3.execute(god);
	
	cout << endl;

	PresidentialPardonForm form4("A3");
	vasya.signForm(form4);
	form4.execute(vasya);

	}
	catch(std::exception& e){
		cout << e.what() << endl;
	}
}
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string const name, int grade){
	_name = name;
	if (grade  < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	cout << "Bureaucrat " << _name << " with grade " << _grade << " constructor called" << endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& copy){
	*this = copy;
}

Bureaucrat::~Bureaucrat(void){
	cout << "Bureaucrat " << _name << " destructor called" << endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat& op){
	if (this == &op)
		return *this;
	this->_name = op.getName();
	this->_grade = op.getGrade();
	return (*this);
}

string Bureaucrat::getName(){
	return _name;
}
int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::incrementGrade(){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade(){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &op){
	if (op.getIsSigned())
		cout << "This form has already been signed!" << endl;
	else{
		try{
			op.beSigned(*this);
			cout << _name << " signs " << op.getName() << endl;
		}
		catch(std::exception& e){
			cout << _name << " cannot sign " << op.getName() << " because: " << e.what() << endl; 
		}
	}
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high!";
}
const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream &out, Bureaucrat& op){
	return out << "The bureaucrat " << op.getName() << " has a score " << op.getGrade() << endl;
}
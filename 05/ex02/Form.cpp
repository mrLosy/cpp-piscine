#include "Form.hpp"

Form::Form(string const name, int gradeRTS, int gradeRTE) :
	_name(name),
	_gradeRequiredToSign(gradeRTS), 
	_gradeRequiredToExecute(gradeRTE)
	{
	if (_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw Form::GradeTooLowException();
	_beSigned = false;
	cout << "Form " << _name << " with gradeS " << gradeRTS << " and gradeE " << gradeRTE << " constructor called" << endl;
}

Form::Form(const Form& copy) :
	_name(copy.getName()),
	_gradeRequiredToSign(copy.getGradeRequiredToSign()),
	_gradeRequiredToExecute(copy.getGradeRequiredToExecute())
{
	*this = copy;
}

Form::~Form(void){
	cout << "Form " << _name << " destructor called" << endl;
}

Form &Form::operator=(const Form& op){
	if (this == &op)
		return *this;
	return (*this);
}

string Form::getName() const{
	return _name;
}

void Form::beSigned(Bureaucrat &op){
	if (op.getGrade() > _gradeRequiredToSign)
		throw Form::GradeTooLowException();
	_beSigned = true;
}

int Form::getGradeRequiredToSign() const{
	return _gradeRequiredToSign;
}
int Form::getGradeRequiredToExecute() const{
	return _gradeRequiredToExecute;
}

bool Form::getIsSigned(){
	return _beSigned;
}

const char * Form::GradeTooHighException::what() const throw(){
	return "Grade too high!";
}
const char * Form::GradeTooLowException::what() const throw(){
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream &out, Form& op){
	return out << "The Form " << op.getName() << " has a gradeS: " << op.getGradeRequiredToSign() <<\
	", gradeE: " << op.getGradeRequiredToExecute() << " and iSigned: " << op.getIsSigned() << endl;
}
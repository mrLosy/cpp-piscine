#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("PresidentialPardonForm", 25, 5) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form("PresidentialPardonForm", 25, 5) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& op){
	if (this == &op)
		return *this;
	_target = op._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->getIsSigned() == false)
		throw Form::IsNotSigned();
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
		throw Form::GradeTooLowException();
	cout << _target << " has been pardoned by Zafod Beeblebrox." << endl;
}
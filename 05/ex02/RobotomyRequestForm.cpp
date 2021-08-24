#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string target) : Form("RobotomyRequestForm", 72, 45) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy){
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& op){
	if (this == &op)
		return *this;
	_target = op._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->getIsSigned() == false)
		throw Form::IsNotSigned();
	else if (executor.getGrade() > this->getGradeRequiredToExecute())
		throw Form::GradeTooLowException();
	cout << "Brrrrrr rrrrr rrrr" << endl;
	if (rand() % 2 == 0)
		cout << _target << " has been robotomized!" << endl;
	else
		cout << _target << " has not been robotomized!" << endl;
}
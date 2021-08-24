#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
		string _target;

public:
		RobotomyRequestForm(string const target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm& op);

		void execute(Bureaucrat const & executor) const;
};

#endif
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form {

private:
		string _target;

public:
		PresidentialPardonForm(string const target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm& op);

		void execute(Bureaucrat const & executor) const;
};

#endif
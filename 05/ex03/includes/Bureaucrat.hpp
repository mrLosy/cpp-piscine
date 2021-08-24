#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

using std::string;
using std::cout;
using std::endl;

class Form;

class Bureaucrat{

private:
		string _name;
		int _grade;

public:
		Bureaucrat(string const name, int grade);
		Bureaucrat(Bureaucrat& copy);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat& op);

		string getName();
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
		void signForm(Form &op);

		class GradeTooHighException : public std::exception{
			const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& op);

#endif
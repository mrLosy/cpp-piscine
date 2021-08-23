#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

using std::string;
using std::cout;
using std::endl;

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
		int getGrade();

		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public std::exception{
			const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& op);

#endif
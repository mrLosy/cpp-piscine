#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>

using std::string;
using std::cout;
using std::endl;

class Bureaucrat;

class Form{

private:
		const string _name;
		int const _gradeRequiredToSign;
		int const _gradeRequiredToExecute;
		bool _beSigned;

public:
		Form(void);
		Form(string const name, int gradeRTS, int gradeRTE);
		Form(const Form& copy);
		virtual ~Form();

		Form &operator=(const Form& op);

		string getName() const;
		int getGradeRequiredToSign() const;
		int getGradeRequiredToExecute() const;
		bool getIsSigned() const;

		void beSigned(Bureaucrat & op);

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception{
			const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char * what() const throw();
		};
		class IsNotSigned : public std::exception{
			const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, Form& op);

#endif
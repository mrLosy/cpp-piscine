#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class span{

private:
		unsigned int _N;
		std::vector<int> _vec;

public:

		span(unsigned int i);
		span(const span &copy);
		~span(void);

		span & operator=(const span &op);

		void addNumber(int num);
		void addMoreNumber(std::vector<int> v);
		int shortestSpan(void);
		int longestSpan(void);

		class StorageFull : public std::exception
		{
			const char* what() const throw();
		};
		class NoElementsToFind : public std::exception
		{
			const char* what() const throw();
		};
};

#endif
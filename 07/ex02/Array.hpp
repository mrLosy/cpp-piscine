#ifndef ARRAY_HPP
# define ARRAY_HPP

#include "iostream"

using std::cout;
using std::endl;
using std::string;

template<typename T>
class Array {

private:
		T * _array;
		unsigned int _size;

public:

		Array() : _array(NULL), _size(0){};
		Array(unsigned int size) : _array(new T[size]), _size(size){};
		Array(const Array<T> & copy){*this = copy;}
		~Array(){delete [] _array;}

		Array &operator=(const Array<T> &op){
			if(this == &op)
				return *this;
			_size = op._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = op._array[i];
			return *this;
		}

		T & operator[](unsigned int const & i) {
		if (i >= _size)
			throw OutOfRangeException();
		return _array[i];
		}

		unsigned int size(void) const {return _size;}

		class OutOfRangeException : public std::exception{
			const char* what() const throw(){
				return "Exception: Out of range!";
			}
		};

};

#endif
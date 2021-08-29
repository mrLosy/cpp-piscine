#include "easyfind.hpp"

using std::cout;
using std::endl;
using std::string;

int main(void){
	std::vector <int> vec;

	vec.push_back(9);
	vec.push_back(99);
	vec.push_back(999);

	try{
		std::vector<int>::iterator it = easyfind(vec, 99);
		cout << "it = " << *it << endl;
		cout << "\nException: try find 98" << endl;
		std::vector<int>::iterator it1 = easyfind(vec, 98);
		cout << "it = " << *it1 << endl;
	}
	catch (std::exception &e){
		e.what();
	}
}
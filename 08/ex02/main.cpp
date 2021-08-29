#include "mutantstack.hpp"

using std::cout;
using std::endl;

int main(void){
	MutantStack<int> mstack;

	mstack.push(2);
	mstack.push(9);
	cout << mstack.top() << endl;
	mstack.pop();
	cout << mstack.top() << endl;
	cout << "\n";
	cout << mstack.size() << endl;
	mstack.push(34);
	mstack.push(1000);
	mstack.push(10);
	mstack.push(2);
	mstack.push(45);
	cout << "\n";

	MutantStack<int> mstack_2;
	mstack_2 = mstack;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	MutantStack<int>::iterator it_2 = mstack_2.begin();
	MutantStack<int>::iterator ite_2 = mstack_2.end();
	++it;
	--it;
	while (it != ite && it_2 != ite_2) {
		cout << *it << '\t' << *it_2 << endl;
		++it;
		++it_2;
	}
	std::stack<int> s(mstack);
	return 0;
}
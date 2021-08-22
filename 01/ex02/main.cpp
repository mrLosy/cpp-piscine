#include <iostream>
#include <string.h>

using std::string;
using std::endl;
using std::cout;

int main(void){
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
}

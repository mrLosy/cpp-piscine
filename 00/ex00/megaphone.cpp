#include <iostream>
#include <string.h>
using std::string;
using std::endl;
using std::cout;

char	ft_toupper(char c){
	if ((96 < c) && (c < 123))
		return (c - 32);
	return (c);
}

int main(int argc, char **argv)
{
	string line;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	for (int i = 1; i < argc; i++)
	{
		
		for (int h = 0; argv[i][h]; h++){
			cout << ft_toupper(argv[i][h]);
		}
	}
	cout << "\n";
	return (0);
}

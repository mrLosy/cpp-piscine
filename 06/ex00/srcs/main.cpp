# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

using std::string;
using std::cout;
using std::endl;

bool	onlyDigit(string _str){
	bool res = true;
	for (int i = 0; _str[i]; i++)
		if (!(_str[i] >= '0' && _str[i] <= '9') && _str[i] != '.' && _str[i] != 'f' && _str[i] != '-')
			res = false;
	return res;
}

void	toChar(string _str){
	if (onlyDigit(_str)){
		int i = 0;
		try{
			double d;
			d = std::stod(_str);
			if (d <= -2147483648 || d >= 2147483647){
				cout << "impossible" << endl;
				return ;
			}
			i = static_cast<int>(d);
		}
		catch(std::exception& e){
			cout << "impossible" << endl;
			return ;
		}
		if (i < 0 || i > 127){
			cout << "not Displayed" << endl;
			return ;
		}
		if (i < 32 || i > 176){
			cout << "not Displayed" << endl;
			return ;
		}
		cout << static_cast<char>(i) << endl;
	}
	if (_str.length() > 1){
		cout << "impossible" << endl;
		return ;
	}
	cout << static_cast<char>(_str[0]) << endl;

}

void	toInt(string _str){
	double d;
	try{
		if (_str.length() == 1 && !isdigit(_str[0])){
		cout << static_cast<double>(_str[0]) << endl;
		return ;
	}
		d = std::stod(_str);
		if ((d <= -2147483648 || d >= 2147483647) || !isdigit(_str[0])){
			cout << "impossible" << endl;
			return ;
		}
		cout << static_cast<int>(d) << endl;
	}
	catch (std::exception& e){
		cout << "impossible" << endl;
		return ;
	}
}

void	toFloat(string _str){
	float f;

	if (_str.length() == 1 && !isdigit(_str[0])){
		cout << static_cast<float>(_str[0]) << "f" << endl;
		return ;
	}
	try{
		f = std::stof(_str);
	}
	catch (std::exception& e){
		cout << "impossible" << endl;
		return ;
	}
	if (static_cast<float>(static_cast<int>(f) == f))
		cout << std::fixed << std::setprecision(1) << f << "f" << endl;
	else
		cout << f << "f" << endl;
}

void	toDouble(string _str){
	double d;

	if (_str.length() == 1 && !isdigit(_str[0])){
		cout << static_cast<double>(_str[0]) << endl;
		return ;
	}
	try{
		d = std::stod(_str);
	}
	catch (std::exception& e){
		cout << "impossible" << endl;
		return ;
	}
	if (static_cast<double>(static_cast<int>(d) == d))
		cout << std::fixed << std::setprecision(1) << d << endl;
	else
		cout << d << endl;
}

int main(int argc, char **argv){
	if (argc != 2) {
		cout << "Wrong number of arguments, only one string as parameter is expected\n";
		return 0;
	}
	string str = argv[1];

	toChar(str);
	toInt(str);
	toFloat(str);
	toDouble(str);

	return 0;
}
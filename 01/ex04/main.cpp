#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::endl;
using std::cout;
using std::fstream;
using std::getline;

int main(int argc, char **argv){
	string file;
	string firstWord;
	string secondWord;
	string buff;
	fstream fin;
	fstream fout;
	size_t len;

	if (argc == 4){
		file = argv[1];
		firstWord = argv[2];
		secondWord = argv[3];
		fin.open(file);
		fout.open(file + ".replace", fstream::out);
		if (fin.is_open() && fout.is_open()){
			len = firstWord.length();
			while (!fin.eof()){
				size_t i = 0;
				buff.clear();
				getline(fin, buff);
				for(i = buff.find(firstWord, i); i != string::npos; i = buff.find(firstWord, i + 1)){
					buff.erase(i, len);
					buff.insert(i, secondWord);
				}
				if (buff.length() > 0)
					fout << buff << "\n";
			}
		}
		else
			cout << "A mistake! Error when opening a file!" << endl;
	}
	else
		cout << "A mistake! Invalid number of arguments!" << endl;
	return (0);
	
}
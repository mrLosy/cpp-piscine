#include "iter.hpp"

void func(int & x){
	x++;
}

void func(string & str){
	str.clear();
}

int main(void){
	int array[4] = {
		array[0] = 0,
		array[1] = 10,
		array[2] = 20,
		array[3] = 30
	};
	for (int i = 0; i < 4; i++)
		cout << "array[" << i <<"] = " << array[i] << endl;
	iter(array, 4, func);
	for (int i = 0; i < 4; i++)
		cout << "iter array[" << i <<"] = " << array[i] << endl;
	cout << "\n";
	string * array1;
	array1 = new string[4]; 
	array1[0] = "haristot";
	array1[1] = "asumerag";
	array1[2] = "mjammie";
	array1[3] = "hguini";
	for (int i = 0; i < 4; i++)
		cout << "array[" << i <<"] = " << array1[i] << endl;
	iter(array1, 4, func);
	for (int i = 0; i < 4; i++)
		cout << "iter array[" << i <<"] = " << array1[i] << endl;
}
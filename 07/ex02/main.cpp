#include "Array.hpp"

int main(void){
	Array <int> array1(5);
	Array <int> array2(4);

	for (int i = 0; i < 5; i++)
		array1[i] = i * 10;

	array2[1] = 90;
	array2 = array1;

	cout << "array1 = " << array1[1] << endl;
	cout << "array2 = " << array2[1] << endl;

}
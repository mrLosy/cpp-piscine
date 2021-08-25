#include <string>
#include <iostream>
#include <stdint.h>

class Data{
public:
		int i;
		char *str;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

int main(){
	Data * ptr = new Data;
	ptr->i = 10;
	ptr->str = "haristot"

}
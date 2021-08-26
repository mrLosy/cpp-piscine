#include <string>
#include <iostream>
#include <stdint.h>

class Data{
public:
		int i;
		std::string str;
};

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}

int main(){
	Data * ptr = new Data;
	ptr->i = 10;
	ptr->str = "haristot";
	uintptr_t addr_temp = serialize(ptr);
	Data * newData = deserialize(addr_temp);
	std::cout << newData->str << " " << newData->i << std::endl; 
}
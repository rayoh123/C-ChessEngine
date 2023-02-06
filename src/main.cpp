#include <iostream>
#include "Color.hpp"

int main(){
	std::cout << "Hello Chess" << std::endl;
	struct Color c1{'w'};
	struct Color c2{'w'};
	std::cout << (c1 == c2) << std::endl;
	return 0;
}
#include "FloatingPoint.h"

#include <iostream>

using namespace std;

int main(){

	FloatingPoint a(541, 2, 1);
	
	std::cout << "FP 'a' is " << a.get_significant() << std::endl;
	
	return 0;

}
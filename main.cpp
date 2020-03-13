#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

inline int cubed (const int side){
	return std::pow(side,3);
}


int main(){
 	//std::cout << cubed(3) << std::endl;
	
	int x = 1;
	int &y = x; //y is now an alternative name for x and has its value
	//int y = 0; This is not allowed because &y is its own variable

	std::cout << "This is x: " << x << std::endl;
	std::cout << "This is &y: " << y << std::endl;


	return 0;
}



#include <iostream>
#include <conio.h>
#include <stdio.h>


int divide(int value) {

	int n;


		if (value == 0) {
		throw std::invalid_argument("Invalid_Error. Division by 0");
		}
		else {

			if (value != 0) {
				n = 1024 / value;

				std::cout << n << std::endl;
			}
		}

		return n;
}



int main() {

	int value;

	std::cout << "Enter number for send on divide" << std::endl;
	std::cin >> value;

	try {
		divide(value);
	}
	catch (const std::invalid_argument& e){
		std::cout << e.what() << std::endl;

	}
}
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


class MathException : public exception {

	public:
	MathException(const char *msg) :exception(msg) {
	
	}

};

int foo(char mathem[]) {


		int n, m, s;
		int a, b;

		n = mathem[0];
		s = mathem[1];
		m = mathem[2];

		switch (n) {
		case '0':
			a = 0;
			break;
		case '1':
			a = 1;
			break;
		case '2':
			a = 2;
			break;
		case '3':
			a = 3;
			break;
		case '4':
			a = 4;
			break;
		case '5':
			a = 5;
			break;
		case '6':
			a = 6;
			break;
		case '7':
			a = 7;
			break;
		case '8':
			a = 8;
			break;
		case '9':
			a = 9;
			break;

		default:
			throw MathException("You entered an invalid first number");
			break;
		}
		switch (s) {
		case '+':
			s = 1;
			break;
		case '-':
			s = 2;
			break;
		case '/':
			s = 3;
			break;
		case '*':
			s = 4;
			break;

		default:
			throw MathException("You entered an invalid math operator");
				break;
		}
		switch (m) {
		case '0':
			b = 0;
			break;
		case '1':
			b = 1;
			break;
		case '2':
			b = 2;
			break;
		case '3':
			b = 3;
			break;
		case '4':
			b = 4;
			break;
		case '5':
			b = 5;
			break;
		case '6':
			b = 6;
			break;
		case '7':
			b = 7;
			break;
		case '8':
			b = 8;
			break;
		case '9':
			b = 9;
			break;

		default:
			throw MathException("You entered an invalid second number");
			break;
		}
		int z;

		if (s == 1) {
			z = a + b;
		}
		if (s == 2) {
			z = a - b;
		}
		if (s == 3) {
			if (b == 0) {
				throw MathException("Can't divide by zero"); 
			}
			else {
				z = a / b;
			}
		}
		if (s == 4) {
			z = a * b;
		}

		cout << z << endl;
		return z;
	}


int main() {

	char math[10];

	cout <<"Enter math operation" << endl;
	gets_s(math);

	try {
		foo(math);
	}
	catch (MathException & ex) {
		cout << ex.what() << endl;
	}
}
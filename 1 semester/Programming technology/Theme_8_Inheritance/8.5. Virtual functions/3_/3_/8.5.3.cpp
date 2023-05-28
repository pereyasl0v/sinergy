#include <iostream>
#include <stdio.h>
using namespace std;

class MyException : public exception {

public:
	MyException(const char* msg) :exception(msg) {

	}
};

class Fraction {
private:
	int x, y, x1, x2, yt ,sx;
	float fr;



public:

	Fraction() {
		x = 0;
		y = 0;
		x1 = 0;
		x2 = 0;
		yt = 0;
		sx = 0;
	}
	Fraction(int valueA, int valueB) {
		x = valueA;
		y = valueB;

		fr = x / y;
	}

	bool operator ==(const Fraction& other)
	{
		return this->fr == other.fr;
	}
	bool operator !=(const Fraction& other)
	{
		return this->fr != other.fr;
	}
	bool operator >(const Fraction& other)
	{
		return this->fr > other.fr;
	}
	bool operator <(const Fraction& other)
	{
		return !(this->fr > other.fr);
	}
	bool operator >=(const Fraction& other)
	{
		return this->fr >= other.fr;
	}
	bool operator <=(const Fraction& other)
	{
		return this->fr <= other.fr;
	}


	Fraction& operator ++() {

		this->x++;
		this->y++;

		return *this;
	}
	Fraction& operator --() {


		this->x--;
		this->y--;
		

		return *this;
	}

	void Getinct() {
		cout << x << '/' << y << endl;
	}



	Fraction& operator +(const Fraction & other) {

		Fraction temp;

		if (other.y != this->y) {
			temp.x1 = this->x * other.y;
			temp.x2 = other.x * this->y;
			temp.sx = temp.x1 + temp.x2;
			temp.yt = this->y * other.y;
			cout << temp.sx << '/' << temp.yt;
		}
		else
		{
			temp.sx = this->x + other.x;
			cout << temp.sx << '/' << other.y;
		}
	

		return temp;

		
	}
	Fraction& operator -(const Fraction& other) {

		Fraction temp;

		if (this->y != other.y) {
			temp.x1 = this->x * other.y;
			temp.x2 = other.x * this->y;
			temp.sx = temp.x1 - temp.x2;
			temp.yt = this->y * other.y;

			cout << temp.sx << '/' << temp.yt;
		}
		else {
			temp.x1 = this->x * other.y;
			temp.x2 = other.x * this->y;
			temp.sx = temp.x1 - temp.x2;

			cout << temp.sx << '/' << other.y;
		}
		return temp;


	}
	Fraction& operator *(const Fraction& other) {

		Fraction temp;


		temp.x1 = this->x * other.x;
		temp.x2 = other.y * this->y;

		cout << temp.x1 << '/' << temp.x2;

		return temp;


	}
	Fraction& operator /(const Fraction& other) {

		Fraction temp;

		temp.x1 = this->x * other.y;
		temp.x2 = other.x * this->y;
		

		cout << temp.x1 << '/' << temp.x2;

		return temp;


	}


	
};


int main() {


	setlocale(LC_ALL, "ru");


	try {
		int a, b, c, d, n;
		cout << "Добро пожаловать в программу предназначенную для выполнения операций с дробями" << endl;
		cout << "Введите дроби" << endl;
		cin >> a;
		cin >> b;
		if (b == 0) {
			throw MyException("На ноль делить нельзя");

		}
		cout << a << '/' << b << "\t - Первая дробь" << endl;
		cin >> c;
		cin >> d;
		if (d == 0) {
			throw MyException("На ноль делить нельзя");

		}
		cout << c << '/' << d << "\t - Вторая дробь" << endl;
		cout << "Выберите действие:" << endl;
		cout << "1.Математические операции" << endl;
		cout << "2.Унарные операции" << endl;
		cout << "3.Логические операции" << endl;

		Fraction fract1(a, b);
		Fraction fract2(c, d);

		cin >> n;

		switch (n) {
		case 1: {
			int n;
			cout << "Выберите действие:\n1.Сложение(+)\n2.Вычитание(-)\n3.Деление(/)\n4.Умножение(*)" << endl;
			cin >> n;
			switch (n) {
			case 1: {

				Fraction result = fract1 + fract2;
				break;
			}
			case 2: {

				Fraction result = fract1 - fract2;
				break;
			}
			case 3: {

				Fraction result = fract1 / fract2;
				break;
			}
			case 4: {

				Fraction result = fract1 * fract2;
				break;
			}

			default: {
				cout << "Выбрано неверное значение" << endl;
				break;
			}
			}
			break;
		}
		case 2: {
			int n;
			cout << "Выберите действие:\n1.Инкремент\n2.Декремент" << endl;
			cin >> n;
			switch (n) {
			case 1:
			{
				++fract1;
				++fract2;

				Fraction infr1 = fract1;
				Fraction infr2 = fract2;

				infr1.Getinct();
				infr2.Getinct();
				break;
			}
			case 2:
			{
				--fract1;
				--fract2;

				Fraction decfr1 = fract1;
				Fraction decfr2 = fract2;

				decfr1.Getinct();
				decfr2.Getinct();
				break;
			}
			default: {
				cout << "Выбрано неверное значение" << endl;
				break;
			}
			}
			break;
		}
		case 3: {
			int n;
			cout << "Выберите одну из логических операций.\n1.== 2.!= 3.< 4.> 5.<= 6.>=" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
			{
				bool result = fract1 == fract2;
				cout << result << endl;
				break;
			}
			case 2:
			{
				bool result = fract1 != fract2;
				cout << result << endl;
				break;
			}
			case 3:
			{
				bool result = fract1 < fract2;
				cout << result << endl;
				break;
			}
			case 4:
			{
				bool result = fract1 > fract2;
				cout << result << endl;
				break;
			}
			case 5:
			{
				bool result = fract1 <= fract2;
				cout << result << endl;
				break;
			}
			case 6:
			{
				bool result = fract1 >= fract2;
				cout << result << endl;
				break;
			}
			default:
				cout << "Выбрано неверное значение" << endl;
				break;
			}
			break;
		}
		default: {
			cout << "Выбрано неверное значение" << endl;
			break;
		}
		}
	}
	catch (MyException& ex) {
		cout << ex.what() << endl;
	}

}


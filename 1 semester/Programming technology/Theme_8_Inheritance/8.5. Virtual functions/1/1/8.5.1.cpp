#include <iostream>
#include <stdio.h>

using namespace std;

class Figure {

public:

	virtual void area() = 0;

};


class Parallelogram : public Figure {

	void area() override 
	{

		cout << "S = a * h \t Площадь Параллелограмма" << endl;
	}

};

class Circle : public Figure {

	void area() override 
	{

		cout << "S = p * r^2 \t Площадь Круга " << endl;
	}

};

class Rectangle : public Parallelogram {

	void area() override
	{

		cout << "S = a * b \t Площадь Прямоугольника" << endl;
	}

};
class Square : public Parallelogram {

	void area() override
	{

		cout << "S = a * a \t Площадь Квадрата " << endl;
	}

};
class Print {

public:

	void area(Figure *figure) {

		figure->area();

	}

};
void main() {

	setlocale(LC_ALL, "ru");

	Parallelogram parallelogramm;
	Circle circle;
	Rectangle rectalngle;
	Square square;

	Print printer;

	printer.area(&parallelogramm);
	printer.area(&circle);
	printer.area(&rectalngle);
	printer.area(&square);

}
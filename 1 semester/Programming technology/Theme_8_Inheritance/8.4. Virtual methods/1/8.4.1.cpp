#include <iostream>
#include <stdio.h>

using namespace std;

class Function {

public:

	virtual void Print() {



	}

};


class Ellipse : public Function {
public:
	void Print() override {

		string y = "вызвали Эллипс \n - y = х^2 / а^2 + у^2 / b^2 ";
		cout << y << endl;

	}

};

class Hiperbola : public Function {
public:
	void Print() override {
		string y = "вызвали Гиперболу \n - y = k/x ";
		cout << y << endl;

	}

};

class Parabola : public Function {
public:
	void Print() override {
		string y = "вызвали Параболу \n - y = х^2 ";
		cout << y << endl;

	}

};



main() {

	setlocale(LC_ALL, "ru");

	Ellipse first;
	Hiperbola second;
	Parabola third;

	Function *ellipse = &first;
	Function *hiperbola = &second;
	Function *parabola = &third;

	ellipse->Print();
	hiperbola->Print();
	parabola->Print();
}

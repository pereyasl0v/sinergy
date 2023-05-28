#include <iostream>
#include <stdio.h>

using namespace std;



class Car {

public:


	Car(string company, string model)
	{
		cout << "Конструктор Car" << endl;
		this->company = company;
		this->model = model;
	}

	string company, model;

};

class PassengerCar : public  Car {

public:

	PassengerCar(string company, string model) : Car(company,model)
	{

		cout << "Конструктор PassengerCar" << endl;
	}

};

class Bus : public  Car {

public:
	Bus(string company, string model) : Car(company, model)
	{
		cout << "Конструктор Bus" << endl;
	}

};

class Minivan : public  PassengerCar , public  Bus
{
public:

	Minivan(string company, string model) : PassengerCar(company, model) , Bus(company, model)
	{
		cout << "Конструктор Minivan" << endl;
	}

};



void main() {


	setlocale(LC_ALL, "ru");

	Minivan Reno("Reno", "Escape");

}
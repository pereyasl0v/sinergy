#include <iostream>
#include <stdio.h>
using namespace std;


class MyException : public exception {

public:
	MyException(char const* msg) : exception(msg) {

	}

};


void personal(int month,int start_sum, int credit_sum, int rate) {
	
	string name[1][4];
	int credit[61][4];
	int balance = credit_sum - start_sum;
	float month_rate = float(rate) / 12;
	

	name[0][0] = "Месяц";
	name[0][1] = "Платеж";
	name[0][2] = "Остаток";
	name[0][3] = "Процент";

	for (int i=1; i < balance; i++)
	{
		
		int pay;
		cout << "Введите сумму платежа" << endl;
		cin >> pay;
		
		float interest = (balance * month_rate)/100;
		balance = balance - pay+interest;

		cout << name[0][0] << '\t';
		cout << name[0][1] << '\t';
		cout << name[0][2] << '\t';
		cout << name[0][3] << endl;

		credit[i][0] = i;
		credit[i][1] = pay;
		credit[i][2] = balance;
		credit[i][3] = interest;

			cout << credit[i][0] << '\t';
			cout << credit[i][1] << '\t';
			cout << credit[i][2] << '\t';
			cout << credit[i][3] << endl;


	}
	if (balance <= 0) {
		throw MyException("Кредит успешно погашен");
	}


	
}

int main()
{
	try {
		setlocale(LC_ALL, "ru");
		int month = 60;
		int start_sum, credit_sum, rate;
		cout << "Сумма кредита:" << endl;
		cin >> credit_sum;
		cout << "Первоначальный взнос:" << endl;
		cin >> start_sum;
		if (start_sum > credit_sum) {
			throw MyException("Первоначальный взнос не должен превышать сумму запрашиваемого кредита:");
		}
		if (start_sum == credit_sum) {
			throw MyException("Первоначальный взнос не должен быть равна сумме кредита:");
			
		}
		cout << "Процентная ставка:" << endl;
		cin >> rate;
	
		personal(month, start_sum, credit_sum, rate);
	}
	catch (MyException& ex) {
		cout << ex.what() << endl;
	}
}


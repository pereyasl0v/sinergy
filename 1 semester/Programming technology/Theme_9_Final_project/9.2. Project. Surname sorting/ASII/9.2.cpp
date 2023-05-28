#include <stdio.h>
#include <string>
#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	int c=0;
	string cache;
	string family[100];
	cout << "Enter number to family of DataBase\n";
	cin >> n;
	cout << "Enter family" << '\n';



	for (int i = 0; i < n; i++) {

		
		cin >> family[i];

	}


	for (int j = 0; j < n - 1; j++){
		for (int i = 0; i < n - 1; i++) {

			if ((int)family[i].at(0) > (int)family[i + 1].at(0)) {

				cache = family[i + 1];
				family[i + 1] = family[i];
				family[i] = cache;
			}
		}
	}

	cout << "SORT:" << endl;
	for (int i = 0; i < n; i++) {

		
		cout<< "ASCII -\t" << (int)family[i].at(0)<<"\t Massive of family -\t" <<family[i] << '\n';

	}

	}

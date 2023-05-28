#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class Person
{

public:

    string name;
    int weight, age;
    string gender;

    void PrintName()
    {
        cout << "Name \t" << name << endl;
    }
    int PrintWeight()
    {
        cout << "Weight \t" << weight << endl;
    }
    int PrintAge()
    {
        cout << "Age \t" << age << endl;
    }
    void PrintGender()
    {
        cout << "Gender \t" << gender << endl;
    }

    void SetName(string person_name)
    {

        name = person_name;
    }
    int SetWeight(int person_weight)
    {

        weight = person_weight;
    }
    int SetAge(int person_age)
    {
        age = person_age;
    }
    void SetGender(string person_gender)
    {

        gender = person_gender;
    }
};

class Student : Person {

public: 

    string name;
    int weight, age;
    string gender;
    int study_years;

    int PrintStudy_years()
    {
        cout << "Study years \t" << study_years << endl;
    }
    int SetStudy_years(int study_study_years)
    {
        study_years = study_study_years;
    }

};

main()
{
    string personname;
    int personweight, personage;
    string persongender;
	int studentstudy_years;

	cout <<"Enter your name" << endl;
    cin >> personname;
    cout <<"Enter your weight" << endl;
    cin >> personweight;
    cout <<"Enter your age" << endl;
    cin >> personage;
    cout <<"Enter your gender" << endl;
    cin >> persongender;
    cout << "Starting year " << endl;
	cin >> studentstudy_years;
	
    Person unit;

    unit.SetName(personname);
    unit.SetWeight(personweight);
    unit.SetAge(personage);
    unit.SetGender(persongender);

    unit.PrintName();
    unit.PrintWeight();
    unit.PrintAge();
    unit.PrintGender();
    

	Student studentik;

	studentik.SetStudy_years(studentstudy_years);
	studentik.PrintStudy_years();
    

}

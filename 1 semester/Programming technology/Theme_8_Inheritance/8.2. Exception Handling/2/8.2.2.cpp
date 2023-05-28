#include <iostream>
#include <string>
#include <fstream>
#include <exception>

using namespace std;



class FileWasNotOpenedException : public exception
{
public:
	FileWasNotOpenedException(const char *msg):exception(msg)
		{

		}
	private:


};

void Foo() {

	string path = "myFile.txt";

	ifstream fin;
	
	fin.open(path);

	if (!fin.is_open()) {
		throw FileWasNotOpenedException("File is don't find");

	}
	else
	{
		cout << "File is open" << endl;
		string str;

		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
		fin.close();
	}
}

int main() {

	try {
		Foo();
	}
	catch (FileWasNotOpenedException & ex)
	{
		cout << ex.what() << endl;
	}
	
	
	}

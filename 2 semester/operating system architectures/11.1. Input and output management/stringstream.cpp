
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string coord;
    double a,b;
    ifstream file("coord.txt");

    if (!file)
    {
    
        cout<< "Wrong" << endl;

    }
    else{
        
        while(file){
           getline(file, coord);
           stringstream fi(coord);
           fi.ignore(1);
           fi >> a;
           fi.ignore(2);
           fi >> b;

            
           if ((a>50 && a<80)&&(b>20 && b<45)){
                cout << a << " " << b << endl;
           }
        }
    }

    return 0;
}
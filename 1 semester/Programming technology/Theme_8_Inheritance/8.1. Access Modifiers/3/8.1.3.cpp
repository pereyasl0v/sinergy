#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class Game{
	
string user_nickname;
	
public:
    
 	 void SetUser_nickname(string name){
 	 	
        user_nickname = name;
    }	

};

class Play : Game{
public:
    
    

};

class Options : Game{
public:

string editnickname;

void setname(string editnicknamed){

    cout << "Options:\nEdit name" << endl;
    cin >> editnickname;
    editnickname
	
}
};

main(){

    int choice, health = 10 , choice_inplay;;
    string nickname;

    cout <<"Hello\nWhat is you are nickname?" << endl;
    cin >> nickname;
    cout >> 
    
    
    for ever{
    
    cout <<"Menu:\n.1.Play\2.Options\n3.End game" << endl;
    cin >> choice;
    if (choice == 1){
    Game user;
    user.SetUsernickname(nickname);
    
    Play user;

   for ever{ 
    cout<< "Your name - " << nickname<< endl;
    cout<<"Your health - "<< health << "/10" endl;

    cout<< "1.Inventory\2.Craft"<< endl;
    cin >> choice_inplay;
    user.setchoiceinplay(choice_inplay);




   }
   }

   if (choice == 2) {
    Options user;
    user.getname();
   
	

    continue;
    

   }

   if (choice == 3){

    break;

   }
}
}
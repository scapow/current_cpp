#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


class Drink
{
private:
	int number;
	string name;
public:
	int getNumber(){return number;}
	string getName(){return name;}
	
//	void setname(string drinkName){ name = drinkName;}


// Constructor:

Drink(int number, string name){
	this -> number = number;
	this -> name = name;
}
};

int main()
{
	Drink dr1(1,"Cola");
	Drink dr2(2,"Fanta");
	Drink dr3(3,"Sprite");
	Drink dr4(4,"Beer");
	Drink dr5(5,"IceTea");

	string numberDrink;
	getline(cin,numberDrink);
	int option = atoi(numberDrink.c_str());
	string name;
	switch (option){
		case 1 :
			name = dr1.getName();
		case 2 :
			name = dr2.getName();
		case 3 :
			name = dr3.getName();
		case 4 :
			name = dr4.getName();
		case 5 :
			name = dr5.getName();
		default :
			name = "no drinks available";
	}
	
	cout<<name<<endl;


//	cout<<i<<endl;

//	cout<<"yeah!\n"<<endl;
	return 0;

}
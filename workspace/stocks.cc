// Was will ich mir bauen??
// Framework um meine Aktien das mir Aktien bewertet anhand verschiedener Kriterien, Kauf und Verkaufszeitpunkte 
// Was für funktionen soll das Programm alles haben?
// 1 .Soll meine eingegebenen Aktien Speichern in einer Art Datenbank...
// 2. Soll mir sachen visualisieren GUI
// 3. Soll mir meine sachen bewerten...
// 



#include <stdlib.h> 
#include <string>
#include <iostream>
using namespace std;


// Classes 
class Stock
{
private:
	double value;
	string name;


public:
	double getValue() {return value;}
	string getName() {return name;}

// Constructor
	Stock(string name, double value){
		this -> name = name;
		this -> value = value;
	}

};


class User		// each User has his own stocks??
{

};





// Functions
int buildNewStock()
{
cout<<"We have a new stock"<<endl;
return 0;
}



int main()
{

	// Intro text bla bla bla...

	int loopVar = 99;
	string usrInput;
	Stock newStock("bla",1);
	while (loopVar != 0)
	{	
		cout<<"Menu:"<<endl;
		cout<<"Press 0 for exiting"<<endl;
		cout<<"Press 1 for entering a stock"<<endl;
		cout<<"Press 2 for printing all entered stocks"<<endl;
		
		getline(cin,usrInput);
		loopVar = atoi(usrInput.c_str());
	
	if (loopVar ==1) {
		string usrInputStockValue;
		string usrInputStockName;


		cout<<"Please input stock name:"<<endl;		
		getline(cin,usrInputStockName);
		cout<<"Please input stock value in €:"<<endl;		
		getline(cin,usrInputStockValue);
		double usrInputStockValue_ = atoi(usrInputStockValue.c_str());		
		Stock newStock(usrInputStockName,usrInputStockValue_);			
		}
	
	else if(loopVar==2){
		
		
		//newStock.getName();
//		cout<<newStock.getName()<<endl;
//		cout<<newStock.getValue()<<endl;

//		cout<<"Thanks for the input..."<<endl;
		}
	}

	// print all entered stocks:
	return 0;
}



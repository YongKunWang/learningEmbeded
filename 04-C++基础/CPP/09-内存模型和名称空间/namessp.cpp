#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main(void)
{ 
	using debts::Debt;
	using debts::showDebt;

	Debt golf = {{"aaa", "bbb"}, 120.0};
	showDebt(golf);
	
	other( );
	another( );

	return 0;
}

void other(void)
{ 
	using std::cout;
	using std::cin;
	using std::endl;

	using namespace debts;

	Person dg = {"Dool", "Good"};
	showPerson(dg);
	cout << endl;

	Debt zippy[3];

	int i = 0;
	for(i = 0; i < 3; i++)
		getDebt(zippy[i]);
	
	for(i = 0; i < 3; i++)
		showDebt(zippy[i]);
	
	cout << "Total debt " << sumDebts(zippy, 3) << endl; 


}
void another(void)
{ 

}

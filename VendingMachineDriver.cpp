#include<iostream>
#include"VendingMachine.h"
#include"FoodMachine.h"
using namespace std;

int main()
{
	FoodMachine machine;
	double change = 0;
	 machine.buyItem(change);

	 /*int num;
	 num = machine.getRandomItem();
	cout << "the num "  << num << endl; */
		 
	 

	system("pause");
	return 0;
}
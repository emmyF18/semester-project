#include "VendingMachine.h"
#include "FoodMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine()
{
	itemchoice[0] = { "Oreo", 1.50, 20 };
	itemchoice[1] = { "Cookie", 1.00, 20 };
	itemchoice[2] = { "Brownie", 1.50, 20 };
	itemchoice[3] = { "Goldfish", 1.50, 20 };
	itemchoice[4] = { "Apple", 2.00, 20 };
}

VendingMachine::~VendingMachine()
{

}



void VendingMachine::getInventory()
{
	for (int i = 0; i > 5; i++)
	{
		cout << "The item: "<< itemchoice[i].name << " has " << itemchoice[i].amountLeft << "items left";
	}
}

void VendingMachine::setMoneyEarned(double moneyE)
{
	totalMoneyEarned = moneyE + totalMoneyEarned;
}

void VendingMachine::showChoices()
{
	cout << "We have these items " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ":  " << itemchoice[i].name << " is $"
			<< itemchoice[i].price << ", we have: "
			<< itemchoice[i].amountLeft << " left " << endl;
	}
	cout << endl;
	cout << "Enter 6 to show the daily report" << endl;
	cout << endl;

}

void VendingMachine::getChoice()
{
	cout << "Please enter the number of the item you want: ";
	cin >> numberOfItem;
	while (numberOfItem > 6 || numberOfItem < 1)
	{
		cout << "Error. Please Enter a number in-between 1-5.";
		cin >> numberOfItem;
	}
	numberOfItem = numberOfItem - 1;
	if (numberOfItem == 5)
	{
		dailyreport();
	}
	

}


double VendingMachine::getMoney()
{
	double change;
	double moneyInserted;
	cout << "Please type how much money you are entering: $";
	cin >> moneyInserted;
	change = moneyInserted - itemchoice[numberOfItem].price;
	while (change < 0)
	{
		cout << "Error, Not enough money Inserted. Returning all money." << endl;
		cout << "Please re-enter money or enter 000 to go back to the menu. $";
		cin >> moneyInserted;
		change = moneyInserted - itemchoice[numberOfItem].price;
		/*if (moneyInserted == 000) //curently doesn't work. sends you into a endless loop
		{
			change = 0;
			system("CLS");
			buyItem(change);
			
		}*/
	
	}
	setMoneyEarned(itemchoice[numberOfItem].price);
	return change;
}

void VendingMachine::buyItem(double change)
{ 
	
	showChoices();
	getChoice();
	cout << endl;
	cout << "The " << itemchoice[numberOfItem].name << " is $" << itemchoice[numberOfItem].price << endl;
	change = getMoney();
	itemchoice[numberOfItem].amountLeft = itemchoice[numberOfItem].amountLeft - 1;
	cout << "Thank you. Here is Your Item: " << itemchoice[numberOfItem].name << endl;
	if (change != 0)
	{
		cout << "and here is your change: $" << change << endl;
	}

}


void VendingMachine::dailyreport()
{
	
	cout << "Daily Report:" << endl;
	cout << "Total Money Earned: " << totalMoneyEarned << endl;
	cout << "Total Inventory Left: "; 
	getInventory();
	cout << endl;
	system("pause");
	exit(0);
}

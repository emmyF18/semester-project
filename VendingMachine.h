#pragma  once
#include <string>
using namespace std;

struct food
{
	string name;
	double price;
	int amountLeft;
	
};

const int SIZE = 5;
class VendingMachine
{

protected:
	int Inventory = 100;
	double totalMoneyEarned = 0;
	food itemchoice[SIZE];
public:

	VendingMachine();
	~VendingMachine();
	void getInventory();
	void setMoneyEarned(double totalMoneyEarned);
	int numberOfItem;
	void showChoices();
	void buyItem(double change);
	void getChoice();
	void dailyreport();
	double getMoney();

};


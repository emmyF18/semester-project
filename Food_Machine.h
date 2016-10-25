#pragma  once
#include <string>
using namespace std;

struct food
{
	string name;
	double price;
	int amountLeft;
	
};


class FoodMachine
{
private:
	food foodItem;
	int Inventory;
	double moneyEarned;

public:

	food getFood();
	void setFood(food foodItem);
	int getInventory();
	void setInventory(int inventory);
	double getMoneyEarned();
	void setMoneyEarned(double moneyEarned);

};


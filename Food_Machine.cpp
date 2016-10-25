#include "Food_Machine.h"
using namespace std;


FoodMachine::FoodMachine(int inv, food item, double moneyE)
{
	Inventory = inv;
	foodItem = item;
	moneyEarned = moneyE;
}

food FoodMachine::getFood()
{
	return foodItem;
}
void FoodMachine::setFood(food item)
{
	item.amountLeft = foodItem.amountLeft;
	item.name = foodItem.name;
	item.price = foodItem.price;
}
int FoodMachine::getInventory()
{
	return Inventory;
}
void FoodMachine::setInventory(int inv)
{
	inv = Inventory;
}
double FoodMachine::getMoneyEarned()
{
	return moneyEarned;
}
void FoodMachine::setMoneyEarned(double moneyE)
{
	moneyE = moneyEarned;
}
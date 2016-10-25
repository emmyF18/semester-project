#pragma once
#include "VendingMachine.h"
#include "FoodMachine.h"
#include <string>
class Item :
	public FoodMachine
{
private:
	string name;
	double price;
	int quantity;
public:
	Item();
	~Item();
	void setName(string name);
	void setPrice(double price);
	void setQuantity(int quantity);
	string getName();
	double getPrice();
	int getQuantity();


};


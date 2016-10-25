#pragma once
#include "VendingMachine.h"
class FoodMachine :
	public VendingMachine

{
public:
	FoodMachine();
	virtual ~FoodMachine();
	void buyItem(double);
	int getRandomItem();
};


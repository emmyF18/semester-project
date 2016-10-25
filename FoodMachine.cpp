#include "FoodMachine.h"
#include "VendingMachine.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

FoodMachine::FoodMachine()
{
	
}


FoodMachine::~FoodMachine()
{

}

int FoodMachine::getRandomItem()
{
	int randomNum; int min = 1; int max = 5;
	srand(time(NULL));
	randomNum =  min + rand() % max;
	return randomNum;

}

void FoodMachine::buyItem(double change)
{
	int rnum = getRandomItem();
	VendingMachine::buyItem(change);
	if (rnum == 5 && numberOfItem == 4 )
	{
		cout << "thanks for choosing a heathy snack. here is five bucks. ";
	}

}

#include "Item.h"


Item::Item()
{

}


Item::~Item()
{
}

void Item::setName(string n)
{
	name = n;
}
void Item::setPrice(double p)
{
	price = p;
}
void Item::setQuantity(int q)
{
	quantity = q;
}
string Item::getName()
{
	return name;
}
double Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}
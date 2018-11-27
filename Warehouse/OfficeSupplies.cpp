#include "OfficeSupplies.h"


OfficeSupplies::OfficeSupplies(string name, int price, string color, int day, int month, int year, int shelfLife)
	:Product(name, price, day, month, year, shelfLife)
{
	setColor(color);
}

void OfficeSupplies::setColor(string color)
{
	this->color = color;
}

void OfficeSupplies::info() const
{
	Product::info();

	cout << "color: " << getColor() << endl;
}

string OfficeSupplies::getStringInfo() const
{
	string res = Product::getStringInfo();

	res += " " + color + "\n";


	return res;
	
}

#include "Product.h"


Product::Product(string name, int price, int day, int month, int year, int shelfLife)
{
	setName(name);
	setPrice(price);
	dateOfManufacture.setDay(day);
	dateOfManufacture.setMonth(month);
	dateOfManufacture.setYear(year);
	setShelLife(shelfLife);
}

void Product::setName(string name)
{
	this->name = name;
}

void Product::setPrice(int price)
{
	this->price = price;
}

void Product::setDateOfManufacture(int day, int month, int year)
{
	dateOfManufacture.setDay(day);
	dateOfManufacture.setMonth(month);
	dateOfManufacture.setYear(year);
}

void Product::setShelLife(int shelfLife)
{
	this->shelfLife = shelfLife;
}

void Product::info() const
{
	cout << "name: " << getName() << endl;
	cout << "price: " << getPrice() << "\n";
	cout << "date: " << getDateOfManufacture() << endl;
	cout << "shelf life: " << getShelLife() << endl;
}

string Product::getStringInfo() const
{
	string s("|");
	string d(".");
	string res;
	res += getName() + s + to_string(getPrice()) + s + to_string(dateOfManufacture.getDay()) + d + to_string(dateOfManufacture.getMonth()) + d + to_string(dateOfManufacture.getYear()) + s + to_string(getShelLife());
	
	return res;
}

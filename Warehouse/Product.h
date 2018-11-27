#pragma once
#include "date_.h"
#include <iostream>
#include <string>

using namespace std;


class Product abstract
{
	string name;
	int price;
	date_ dateOfManufacture;
	int shelfLife;

public:

	Product(string name, int price, int day, int month, int year, int shelfLife);

	void setName(string name);
	void setPrice(int price);
	void setDateOfManufacture(int day, int month, int year);
	void setShelLife(int shelfLife);
	
	string getName() const { return name; }
	int getPrice() const { return price; }
	date_ getDateOfManufacture() const { return dateOfManufacture; }
	int getShelLife() const { return shelfLife; }

	virtual void info() const;
	virtual string getStringInfo() const;

};

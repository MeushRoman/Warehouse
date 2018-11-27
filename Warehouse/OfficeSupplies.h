#pragma once
#include "Product.h"


class OfficeSupplies
	:public Product
{
	string color;

public:
	OfficeSupplies(string name, int price, string color, int day, int month, int year, int shelfLife);

	void setColor(string color);
	string getColor() const { return color; }

	void info() const override;

	string getStringInfo() const override;

};
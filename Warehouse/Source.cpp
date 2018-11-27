#include <iostream>
#include <fstream>
#include "date_.h"
#include "OfficeSupplies.h"
#include "Product.h"

using namespace std;


void main() {
	OfficeSupplies ofs("pen", 1000, "black", 20, 11, 2018, 12);

	cout << ofs.getStringInfo();
	

	
	system("pause");
}
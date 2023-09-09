#include<iostream>
#include"Sales_data.h"

/*
	1.20
int main() {
	Sales_data item;
	double price;
	std::cin >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue;
}
*/
/*
	1.21
int main() {
	Sales_data item1,item2,item;
	double price1,price2;
	std::cin >> item1.bookNo >> item1.units_sold >> price1;
	std::cin >> item2.bookNo >> item2.units_sold >> price2;
	item1.revenue = item1.units_sold * price1;
	item2.revenue = item2.units_sold * price2;
	if (item1.bookNo == item2.bookNo)
	{
		item.bookNo = item1.bookNo;
		item.units_sold = item1.units_sold + item2.units_sold;
		item.revenue = item1.revenue + item2.revenue;
	}
	std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue;
}
*/

int main()
{
	Sales_data curr, item;
	double price,curpri;
	std::cin >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	while (std::cin >> curr.bookNo >> curr.units_sold >> curpri)
	{
		curr.revenue = curr.units_sold * curpri;
		if (item.bookNo == curr.bookNo)
		{
			item.units_sold += curr.units_sold;
			item.revenue += curr.revenue;
		}
		else
		{
			std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
			item.bookNo = curr.bookNo;
			item.revenue = curr.revenue;
			item.units_sold = curr.units_sold;
		}
	}
	std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
}
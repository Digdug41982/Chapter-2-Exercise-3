

#include <iostream>
using namespace std;
int main()
{
	int purchase;
	int salesTax;
	int CountyTax;
	int total;

	purchase = 95;
	salesTax = (purchase * 0.0065);
	CountyTax = (purchase * 0.02);
	total = (purchase + salesTax + CountyTax);
	cout << total;

}


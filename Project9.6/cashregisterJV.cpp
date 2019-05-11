#include "cashregister.h"
#include <vector>
#include <iostream>

using namespace std;

CashRegister::CashRegister()
{
	clear();
}

void CashRegister::clear()
{
	prices.clear();
	return;
}

void CashRegister::add_item(double price)
{
	prices.push_back(price);
	return;
}

double CashRegister::get_total() const
{	
	double total_price = 0;
	for (int i = 0; i < prices.size(); i++)
	{
		total_price = total_price + prices.at(i);
	}
	return total_price;
}

int CashRegister::get_count() const
{
	return prices.size();
}

void CashRegister::display_all() const
{
	for (int i = 0; i < prices.size(); i++)
	{
		cout << prices.at(i) << endl;
	}
	return;
}




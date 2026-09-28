#pragma once
#include <queue>
#include <string>
#include <map>
#include <iostream>


class Customer
{
	std::string name;
	double orderCost = 0.0;

public:
	const inline double getOrder() { return orderCost; }
	const inline std::string getName() { return name; }

	Customer() = default;
	Customer(const std::string& name);
};

class SandwichShop
{
	std::queue<Customer> lane1;
	std::queue<Customer> lane2;

	std::map<std::string, double> theMenu;

	double revanue = 0.0;

public:
	SandwichShop();

	Customer takeOrder();

	void printMenu();


	void checkoutCustomer(const std::string& customerName);
	void simulateADayInTheLife();
};


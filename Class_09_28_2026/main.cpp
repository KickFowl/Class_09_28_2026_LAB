#include <string>
#include <iostream>
#include <queue>

#include "SandwichShop.h"

SandwichShop sethsSandwichShop;

int main()
{

	std::queue<std::string> customers;

	customers.push("Timothy");
	customers.push("Seth");
	customers.push("Norman");
	customers.push("Josh");
	customers.push("Berry");

	std::cout << "Front customer name: " << customers.front() << '\n';
	std::cout << "Back customer name: " << customers.back() << '\n';
}
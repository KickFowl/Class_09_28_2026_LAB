#include "SandwichShop.h"

Customer::Customer(const std::string& name) : name(name)
{

}

SandwichShop::SandwichShop()
{
	theMenu.insert({ "Ham and Cheese", 9.99 });
	theMenu.insert({ "PB & J", 7.99 });
	theMenu.insert({ "Turkey Bacon Club", 11.99 });
	theMenu.insert({ "The Monster", 13.99 });
	theMenu.insert({ "Grave Digger", 13.99 });
	theMenu.insert({ "The Miss", 19.99 });
}

void SandwichShop::printMenu()
{
	for (const auto& currentMenuItem : theMenu)
	{
		std::cout << currentMenuItem.first << '\n';
	}
}


/*
if (theMenu.find(string_key) != theMenu.end())
{
	rewind += theMenu[string_key];
}else{error};
*/
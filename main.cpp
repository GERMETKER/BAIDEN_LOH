#include <iostream>
#include "Apartment.hpp"
#include "Lodger.hpp"

int main()
{
	Apartment priton("Megegeyskaya - 21", 121);
	Lodger ahmed("Ahmed", 19, "churka");
	Lodger leha("Leha", 211, "russion");
	Lodger john("John", 38, "pendos");
	Lodger moisha("Moisha", 42, "evrey");
	Lodger vanya("Vanya", 22, "russion");
	priton.AddLodger(ahmed);
	priton.AddLodger(leha);
	priton.AddLodger(john);
	priton.AddLodger(moisha);
	priton.AddLodger(vanya);
	priton.PrintLodgers();
	std::cout << "\nVanya siel rakoviny\n";
	std::cout << "\n";
	priton.EvictLodger(3);
	std::cout << "\n";
	priton.PrintLodgers();



}
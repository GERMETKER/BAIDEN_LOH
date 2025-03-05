#ifndef APARTMENT_HPP
#define APARTMENT_HPP
#include <iostream>
#include <vector>
#include "Lodger.hpp"

class Apartment
{
public:
	Apartment() = default;

	std::string GetAdress()const;

	int GetSpace()const;
	void ChangeSpace(int space);



private:
	std::string adress_;
	int space_;
	std::vector<Lodger> lodgers_;
};



#endif
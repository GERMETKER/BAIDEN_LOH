#ifndef APARTMENT_HPP
#define APARTMENT_HPP
#include <iostream>
#include <vector>
#include "Lodger.hpp"

class Apartment
{
public:
	Apartment() = default;
	Apartment(std::string adress, int space)
	{
		adress_ = adress;
		space_ = space;
	}
	std::string GetAdress()const;

	int GetSpace()const;
	void ChangeSpace(int space);
	void AddLodger(Lodger& other);
	void EvictLodger(int index);
	void PrintLodgers();


private:
	std::string adress_;
	int space_;
	std::vector<Lodger> lodgers_; 
};



#endif
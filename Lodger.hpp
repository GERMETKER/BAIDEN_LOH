#ifndef LOGER_HPP
#define LOGER_HPP

#include <iostream>

class Lodger
{
public:
	std::string name;
	int GetAge()const;
	std::string GetNation()const;
private:
	int age_;
	std::string nationality_;
};

#endif
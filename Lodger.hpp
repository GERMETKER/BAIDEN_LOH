#ifndef LOGER_HPP
#define LOGER_HPP

#include <iostream>

class Lodger
{
public:
	Lodger() = default;
	Lodger(std::string name, int age, std::string nationality);
	std::string name;
	std::string GetName()const;
	int GetAge()const;
	std::string GetNation()const;
private:
	std::string name_;
	int age_;
	std::string nationality_;
};

#endif
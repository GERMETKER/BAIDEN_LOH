#include "Lodger.hpp"

Lodger::Lodger(std::string name, int age, std::string nationality)
{
    name_ = name;
    age_ = age;
    nationality_ = nationality;
}

std::string Lodger::GetName() const
{
    return name_;
}

int Lodger::GetAge() const
{
    return age_;
}

std::string Lodger::GetNation() const
{
    return nationality_;
}

#include "Apartment.hpp"

std::string Apartment::GetAdress() const
{
    return adress_;
}

int Apartment::GetSpace() const
{
    return space_;
}

void Apartment::ChangeSpace(int space)
{
    space_ = space;
}

void Apartment::AddLodger(Lodger& other)
{
    if (other.GetAge() >= 18 && other.GetNation() != "churka")
    {
        lodgers_.emplace_back(other);
    }
    else if (other.GetNation() == "churka")
    {
        std::cout << other.GetName() << " ne zaselen: on churka\n\n";
    }
    else if (other.GetAge() < 18)
    {
        std::cout << other.GetName() << " ne zaselen: ne sovrshennoletniy\n\n";
    }
}

void Apartment::EvictLodger(int index)
{
    auto start = lodgers_.begin();
    std::cout << lodgers_[index].GetName() << " bil viselen\n";
    lodgers_.erase(start + (index));
}

void Apartment::PrintLodgers()
{
    auto start = lodgers_.begin();
    for (int i = 0; i < lodgers_.size(); i++)
    {
        std::cout << lodgers_[i].GetName() << " " << lodgers_[i].GetAge() << " " << lodgers_[i].GetNation() << "\n";
    }
}

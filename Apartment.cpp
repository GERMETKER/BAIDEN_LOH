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

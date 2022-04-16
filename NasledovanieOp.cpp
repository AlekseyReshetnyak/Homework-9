#include "Nasledovanie.h"

Property::Property(double a = 0)
{
	worth = a;
	std::cout << "Constructor Property\n";
}

Property::~Property()
{
	std::cout << "Destructor Property\n";
}

Apartament::Apartament(double a) : Property(a)
{
	std::cout << "Constructor Apartament\n";
	Nalog = RaschetNaloga();
}

double Apartament::RaschetNaloga()
{
	std::cout << worth / 1000 << std::endl;
	return worth / 1000;
}

Apartament::~Apartament()
{
	std::cout << "Destructor Apartament\n";
}

Car::Car(double a) : Property(a)
{
	std::cout << "Constructor Car\n";
	Nalog = RaschetNaloga();
}

double Car::RaschetNaloga()
{
	std::cout << worth / 200 << std::endl;
	return worth / 200;
}

Car::~Car()
{
	std::cout << "Destructor Car\n";
}

void Car::Print()
{
	std::cout << "Ford";
}

CountryHouse::CountryHouse(double a) : Property(a)
{
	std::cout << "Constructor CountryHouse\n";
	Nalog = RaschetNaloga();
}

double CountryHouse::RaschetNaloga()
{
	std::cout << worth / 500 << std::endl;
	return worth / 500;
}

CountryHouse::~CountryHouse()
{
	std::cout << "Destructor CountryHouse\n";
}

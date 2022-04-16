#pragma once

#include <iostream>

class Property 
{
protected:
	double worth;
public:
	Property(double);
	virtual double RaschetNaloga() = 0;
	virtual ~Property();
};

class Apartament : public Property
{
	double Nalog = 0;
public:
	Apartament(double);
	double RaschetNaloga();
	~Apartament();
};

class Car : public Property
{
	double Nalog = 0;
public:
	Car(double);
	double RaschetNaloga();
	~Car();
	void Print();
};

class CountryHouse : public Property
{
	double Nalog = 0;
public:
	CountryHouse(double);
	double RaschetNaloga();
	~CountryHouse();
};
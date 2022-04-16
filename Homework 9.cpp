#include "Nasledovanie.h"

int main()
{
	/*Car automobile(1000000);
	Property* p = &automobile;
	std::cout << "End";*/

	Property* arru[] = { new Apartament(10000000), new Apartament(20000000), new Apartament(7000000), new Car(1500000), new Car(700000), new CountryHouse(50000000), new CountryHouse(100000000) };
	for (int i = 0; i < 7; i++)
		delete arru[i];
}
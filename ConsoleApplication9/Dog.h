#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(const char* name, int age, int weight);

private:
	int weight;
};

#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(const char* name, int age, const char* breed);

private:
	char* breed;
};
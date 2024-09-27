#pragma once
#include "Animal.h"

class Parrot : public Animal
{
public:
	Parrot(const char* name, int age, const char* color);

private:
	char* color;
};
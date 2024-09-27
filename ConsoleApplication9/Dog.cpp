#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Dog.h"

Dog::Dog(const char* name, int age, int weight)
	: Animal(name, age), weight(weight) {
	std::cout << "Dog name is " << name << "It's " << age << " years old. " << "Its weight is " << weight << std::endl;
}

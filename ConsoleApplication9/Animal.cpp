#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"

Animal::Animal(const char* name, int age) {
	this->age = age;
	int len = std::strlen(name) + 1;
	this->name = new char[len];
	std::strcpy(this->name, name);
	std::cout << "Your pet's name is " << name << " It's " << age << " years old " << std::endl;
}
#define _CRT_SECURE_NO_WARNINGS
#include "Cat.h"
#include <iostream>

Cat::Cat(const char* name, int age, const char* breed)
	: Animal(name, age) {
	int len = std::strlen(breed) + 1;
	this->breed = new char[len];
	std::strcpy(this->breed, breed);
	std::cout << "Cat name is " << name << " It's " << age << " years old " << "and its breed is " << breed << std::endl;
}
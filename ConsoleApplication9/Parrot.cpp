#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Parrot.h"

Parrot::Parrot(const char* name, int age, const char* color)
	: Animal(name, age) {
	int len = std::strlen(color) + 1;
	this->color = new char[len];
	std::strcpy(this->color, color);
	std::cout << "Parrot name is " << name << " It is " << age << " years old. " << "It is " << color << " in color" << std::endl;
}
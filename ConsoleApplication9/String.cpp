#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <iostream>


String::String() {
    str = nullptr;
    length = 0;
}

String::String(const char* str) {
    length = std::strlen(str);
    this->str = new char[length + 1];
    std::strcpy(this->str, str);
}

String::String(const String& other) {
    length = other.length;
    str = new char[length + 1];
    std::strcpy(str, other.str);
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        std::strcpy(str, other.str);
    }
    return *this;
}

String::~String() {
    delete[] str;
}

int String::GetLength() {
    return this->length;
}

void String::Show() {
    if (this->str != nullptr) {
        std::cout << this->str << std::endl;
    }
}

void String::clear() {
    delete[] str;
    str = nullptr;
    length = 0;
}

bool String::Checker(const String& other) {
    return std::strcmp(this->str, other.str) == 0;
}

bool String::Checker2(const String& other) {
    return std::strcmp(this->str, other.str) != 0;
}

String& String::operator+=(const String& other) {
    if (other.str == nullptr) {
        return *this;
    }

    int new_length = this->length + other.length;
    char* new_str = new char[new_length + 1];


    std::strcpy(new_str, this->str);

    std::strcpy(new_str + this->length, other.str);

    delete[] this->str;
    this->str = new_str;
    this->length = new_length;
    return *this;
}
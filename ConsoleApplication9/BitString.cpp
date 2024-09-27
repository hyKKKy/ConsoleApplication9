#define _CRT_SECURE_NO_WARNINGS
#include "BitString.h"
#include "String.h"
#include <iostream>

BitString::BitString() : String() {}

BitString::BitString(const char* str) : String() {
    if (str) {
        for (int i = 0; i < std::strlen(str); i++) {
            if (str[i] != '0' && str[i] != '1') {
                this->str = nullptr;
                this->length = 0;
                return;
            }
        }
        length = std::strlen(str);
        this->str = new char[length + 1];
        std::strcpy(this->str, str);
    }
}

BitString::BitString(const BitString& other) : String(other) {}

BitString& BitString::operator=(const BitString& other) {
    String::operator=(other);
    return *this;
}

BitString::~BitString() = default;

BitString& BitString::operator+=(const BitString& other) {
    String::operator+=(other);
    return *this;
}
#pragma once
#include "String.h"


class BitString : public String {
public:
    BitString();

    BitString(const char* str);

    BitString(const BitString& other);

    BitString& operator=(const BitString& other);

    ~BitString();

    BitString& operator+=(const BitString& other);
};
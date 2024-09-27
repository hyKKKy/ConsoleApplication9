#pragma once

class String {
public:
    String();

    String(const char* str);

    String(const String& other);

    String& operator=(const String& other);

    int GetLength();

    ~String();

    void Show();

    void clear();

    bool Checker(const String& other);

    bool Checker2(const String& other);

    String& operator+=(const String& other);

protected:
    char* str;
    int length;
};
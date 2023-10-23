#include "MyString.h"
#include <cstring>
#include <ostream>
#include <iostream>



MyString::MyString(const char* str) {
    len = strlen(str);
    myStr = new char[len +1];
    strcpy(myStr, str);
}

MyString::~MyString(){
    delete[] myStr;
}

const char* MyString::toString() const {
    return myStr;
}

int MyString::length() const{
    int length = strlen(myStr);
    return length;
}

MyString MyString::substr(int start, int end) const {
    if (start < 0) start = 0;
    if (end == -1 || end >= len) end = len - 1;
    
    if (start > end) {
        std::cout << "Invalid substring indices." << std::endl;
        return MyString("");
    }

    int newLen = end - start + 1;
    char* newStr = new char[newLen + 1];
    strncpy(newStr, myStr + start, newLen);
    newStr[newLen] = '\0';

    return MyString(newStr);
}

MyString MyString::operator+(const MyString& other) const {
        int len1 = strlen(myStr);
        int len2 = strlen(other.myStr);

        char* result = new char[len1 + len2 + 1];
        strcpy(result, myStr);
        strcat(result, other.myStr);

        return MyString(result);
}
char MyString::operator[](int index) const {
    if (index >= 0 && index < len) {
        return myStr[index];
    } else {
        std::cout << "Index out of bounds" << std::endl;
        return '\0'; // Return a null character for out-of-bounds indices
    }
}

bool MyString::operator<(const MyString& other) const {
        return strcmp(myStr, other.myStr) < 0;
    }

bool MyString::operator>(const MyString& other) const {
        return strcmp(myStr, other.myStr) > 0;
    }

bool MyString::operator<=(const MyString& other) const {
        return strcmp(myStr, other.myStr) <= 0;
    }
bool MyString::operator>=(const MyString& other) const {
        return strcmp(myStr, other.myStr) >= 0;
    }
bool MyString::operator==(const MyString& other) const {
        return strcmp(myStr, other.myStr) == 0;
    }
bool MyString::operator!=(const MyString& other) const {
        return strcmp(myStr, other.myStr) != 0;
    }



#ifndef _MyString_h
#define _MyString_h

#include <cstring>
#include <ostream>

class MyString {
    public:

    MyString(const char* str);

    ~MyString();

    const char* toString() const;
    int length() const;
    MyString substr(int n, int end = -1) const;
    MyString operator+(const MyString& other) const;
    char operator[](int index) const;
    bool operator<(const MyString& other) const;
    bool operator>(const MyString& other) const;
    bool operator<=(const MyString& other) const;
    bool operator>=(const MyString& other) const; 
    bool operator==(const MyString& other) const;
    bool operator!=(const MyString& other) const;




    private:
    char* myStr;
    int len;



};







#endif
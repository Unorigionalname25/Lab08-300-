#include "MyString.h" 
#include <iostream>

int main() {
    const char* str1 = "apple";
    const char* str2 = "banana";

    MyString myStr1(str1);
    MyString myStr2(str2);

    std::cout << "myStr1: " << myStr1.toString() << std::endl;
    std::cout << "myStr2: " << myStr2.toString() << std::endl;
    std::cout << "myStr1 length: " << myStr1.length() << std::endl;
    std::cout << "myStr2 length: " << myStr2.length() << std::endl;

    MyString concatenated = myStr1 + myStr2;
    MyString result = myStr1 + " Concatenated " + str2;

    std::cout << "Concatenated: " << concatenated.toString() << std::endl;
    std::cout << "Result: " << result.toString() << std::endl;

    // Test bracket operator and out-of-bounds handling
    for (int i = 0; i < myStr1.length(); i++) {
        std::cout << "myStr1[" << i << "]: " << myStr1[i] << std::endl;
    }

    char character = myStr1[15]; 
        std::cout<<character<<std::endl;
        

    if (myStr1 < myStr2) {
        std::cout << "myStr1 is less than myStr2" << std::endl;
    } else if (myStr1 > myStr2) {
        std::cout << "myStr1 is greater than myStr2" << std::endl;
    } else {
        std::cout << "myStr1 is equal to myStr2" << std::endl;
    }

    if (myStr1 != myStr2) {
        std::cout << "myStr1 is not equal to myStr2" << std::endl;
    }

    return 0;
}

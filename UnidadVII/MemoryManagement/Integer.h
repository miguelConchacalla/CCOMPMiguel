#ifndef __INTEGER_H__
#define __INTEGER_H__

#include <iostream>

class Integer 
{
public:
    int value;
    Integer() {
        value = 0;
        std::cout << "default constructor" << value << std::endl;
    }
};

#endif
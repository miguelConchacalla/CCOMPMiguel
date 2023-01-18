#ifndef __PHONENUMBER_H__
#define __PHONENUMBER_H__
#include <string>
#include <iostream>

class PhoneNumber {
    friend std::ostream& operator<<(std::ostream&, const PhoneNumber&);

    friend std::istream& operator>>(std::istream&,PhoneNumber&);

    private:
        std::string areaCode; // 3-digit area code
        std::string exchange; // 3-digit exchange
        std::string line; // 4-digit Tine
};

#endif
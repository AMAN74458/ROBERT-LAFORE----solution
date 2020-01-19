// exercise *8  --> Solution
// By AMAN KUMAR

#include<iostream>
#include<iomanip>    // for setw Manipulator
int main()
{

    // setw ( set width) makes view better and standard. setfill, when a value is smaller than a field specified with setw(), the unused locations are, by default filled in with the spaces. The manipilator setfill() takes a single argument and causes this cahracter to be submitted for spaces in the empty parts of a field.
    std::cout << std::setw(4) << "1990" << std::setw(12) << std::setfill('.') << "132" << std::endl
              << std::setw(4) << "1991" << std::setw(12) << "7290" << std::endl
              << std::setw(4) << "1992" << std::setw(12) << "11300" << std::endl
              << std::setw(4) << "1993" << std::setw(12) << "16200" << std::endl;

    return 0;

}


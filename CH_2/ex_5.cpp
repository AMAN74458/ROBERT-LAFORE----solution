// A library function, islower(), takes a single character (a letter) as an argument and returns a nonzero integer if the letter is lowercase, or zero if it is uppercase. This func- tion requires the header file CTYPE.H.
// exercise *5  --> Solution
// By AMAN KUMAR

#include<iostream>
#include<ctype.h>
int main()
{
    char lower;
    std::cout << "Enter any one Letter: " << std::endl;
    std::cin >> lower;

    // IF user will enter letter in lowercase ouput will be 1
    // IF user will enter letter in uppercase output wiil be 0;
   
    std::cout << islower(lower) << std::endl;

    return 0;
}
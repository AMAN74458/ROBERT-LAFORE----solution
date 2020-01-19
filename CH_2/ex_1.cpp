// exercise *1  --> Solution
// By AMAN KUMAR

#include<iostream>
int main()
{
    std::cout << "Enter a Number of Gallons: " << std::endl;
    float number_gallons;
    std::cin >> number_gallons;

    // logic
    // 1 US Gallon = 0.134 cubic feet

    float cubic_feet;
    cubic_feet = number_gallons * 0.134;

    // output

    std::cout << number_gallons << " gallons equivalent in cubic feet is " << cubic_feet << std::endl;

    return 0;
}
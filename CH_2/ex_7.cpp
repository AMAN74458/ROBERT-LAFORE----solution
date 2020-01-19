// exercise *7  --> Solution
// By AMAN KUMAR

#include<iostream>
int main()
{
    float celsius;
    std::cout << "Enter temperature in degree Celsius : " << std::endl;
    std::cin >> celsius;

    // logic 
    // You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and adding 32. 

    float fahrenheit;
    fahrenheit = 1.8 * celsius + 32;

    std::cout << celsius << " degree celsius is equal to " << fahrenheit << std::endl;

    return 0;
}
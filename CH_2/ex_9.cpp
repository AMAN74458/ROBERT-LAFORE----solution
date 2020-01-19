// exercise *9  --> Solution
// By AMAN KUMAR

#include<iostream>
int main()
{
    int numerator1, denomenator1, numerator2, denominator2;
    char slash1, slash2;

    // taking input

    std::cout << "Enter first fraction : ";
    std::cin >> numerator1 >> slash1 >> denomenator1;

    std::cout << std::endl;

    std::cout << "Enter second fraction : ";
    std::cin >> numerator2 >> slash2 >> denominator2; 
    std::cout << std::endl;
    
    // logic

    int numerator, denomenator;
    numerator =  (( numerator1 * denominator2 ) + ( numerator2 * denomenator1 ));
    denomenator =  ( denomenator1 * denominator2);

    // output

    std::cout << numerator << "/" << denomenator << std::endl;

    return 0;
}
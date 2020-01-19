// exercise *10  --> Solution
// By AMAN KUMAR

#include<iostream>
int main()
{
    float pounds;
    std::cout << "Enter pounds : ";
    std::cin >> pounds;

    float shillings;
    std::cout << "Enter shillings : ";
    std::cin >> shillings;

    float pence;
    std::cout << "Enter pence : ";
    std::cin >> pence;

    float new_pound;
    new_pound = pounds + ( shillings / 20 ) + ( pence / 240 );     // logic

    std::cout << "Decimal pounds : " << "£" << new_pound << std::endl;

    return 0;
}
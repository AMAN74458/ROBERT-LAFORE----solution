// exercise *11  --> Solution
// By AMAN KUMAR

#include<iostream>
#include<iomanip>
int main()
{
    std::cout << std::setiosflags(std::ios::left) << std::setw(12) << "Last name"
              << "First name" << std::setw(16) << "Street address" << std::setw(6) 
              << "Town" << std::setw(14) << "State" << std::endl;
    
    std::cout << std::setiosflags(std::ios::left) << "Jones" << std::setw(13) 
              << "Bernard" << std::setw(18) << "109 Pine Lane" << std::setw(13) 
              << "Littletown" << std::setw(5) << "MI" << std::endl;  
    
    std::cout << std::setiosflags(std::ios::left) << "O'Brain" << std::setw(10) 
              << "Coleen" << "42 E. 99th Ave." << "Bigcity" << "NY" << std::endl;
}
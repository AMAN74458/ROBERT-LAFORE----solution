// exercise *6  --> Solution
// By AMAN KUMAR

#include<iostream>
int main()
{
    float US_dollars;
    std::cout << "Enter amount in US Dollars: " << std::endl;
    std::cin >> US_dollars;

    // logic and output
    // On a certain day the British pound was equivalent to $1.487 U.S., the French franc was $0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.

    float british_pound;
    british_pound = US_dollars * 1.487;
    std::cout << british_pound << " British Pound is equivalent to " << US_dollars << std::endl;
    
    float french_franc;
    french_franc = US_dollars * 0.172;
    std::cout << french_franc << " French franc is equivalent to " << US_dollars << std::endl;
    
    float german_deutschemark;
    german_deutschemark = US_dollars * 0.584;
    std::cout << german_deutschemark << " German Deutschemark is equivalent to " << US_dollars << std::endl;
    
    float japenese_yen;
    japenese_yen = US_dollars * 0.00955;
    std::cout << japenese_yen << " Japenese Yen is euivalent to " << US_dollars << std::endl;

    return 0;
}
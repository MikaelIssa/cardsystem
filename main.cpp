#include <iostream>
#include "include/User.hpp"
#include "include/Card.hpp"
#include "include/Admin.hpp"

int main(){
    Card card1("C001", 2);
    User user1("U001", "Mikael Issa", "Mikael@hotmail.com", "0704223481", card1);
    Admin admin1("A001", "Admin Mikael", "Password123", "07012312312", "example@hotmail.com", card1);
    std::cout <<"-----------User--------------" << std::endl;
    user1.printInfo();
    std::cout <<"---------------Admin----------------" <<std::endl;

    admin1.printInfo();


    std::cout <<"-----------------------------" << std::endl;
   
    
    return 0;
}
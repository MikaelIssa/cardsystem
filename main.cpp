#include <iostream>
#include "include/User.hpp"
#include "include/Card.hpp"

int main(){
    Card card("C001", 2);
    User user("U001", "Mikael Issa", "Mikael@hotmail.com", "0704223481", card);

    user.printInfo();
    return 0;
}
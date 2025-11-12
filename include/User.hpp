#ifndef USER_HPP // kolla varför man gör så
#define USER_HPP

#include <string>
#include <iostream>
#include "Card.hpp" // vi skapar denna fil senare

class User{
 //skapar en klass med privata variabler
    private:
            std::string name;
            std::string email;
            std::string phone;
            Card card; // varje användare komemr att ha ett kort

        public:

        //en konstruktor för att skapa user objektet 
        User(const std::string& id, const std::string& name, const std::string& email, const std::string& phone, const Card& card);

        //skapar getter för att hämta info
        int getId() const;
        std::string getName() const;
        std::string getEmail() const;
        std::string getPhone() const;
        Card getCard() const;

        //skapar setter funktioner för att uppdatera info 

        void setName(const std::string& newName);
        void setEmail(const std::string& newEmail);
        void setPhone(const std::string& newPhone);


        //visar info
        void printInfo() const;

}
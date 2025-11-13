#ifndef ADMIN_HPP
#define ADMIN_HPP

#include <string>
#include "Card.hpp" // vi inkluderar card för att en admin har ett kort

                            // klassen representerar en administratör i systemet
class Admin {

                            //privata variabler bara tillgänliga inuti klassen
private:
    std::string id;
    std::string password;
    std::string name;
    std::string email;
    std::string phone;
    Card card;

                                // vi använder konstuktor när vi vill skapa en ny admin
public:
    // Konstruktor
    Admin(const std::string& id, const std::string& password,
          const std::string& name, const std::string& email,
          const std::string& phone, const Card& card);

                            
                                // getters använd för att hämta information
    std::string getId() const;
    std::string getPassword() const;
    std::string getName() const;
    std::string getEmail() const;
    std::string getPhone() const;
    Card getCard() const;


                                // Setters avnänd för att ändra information
    void setName(const std::string& newName);
    void setEmail(const std::string& newEmail);
    void setPhone(const std::string& newPhone);
    void setPassword(const std::string& newPassword);

                             // funktion för att skriva ut all info om admin 
    void printInfo() const;
};

#endif
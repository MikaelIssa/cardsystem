#ifndef USER_HPP // kolla varför man gör så
#define USER_HPP

#include <string>
#include "Card.hpp"  // Varje användare har ett kort

                        // Klassen User representerar en vanlig användare i systemet
class User{
 
                        // Privata variabler – bara tillgängliga inuti klassen
    private:
            std::string id;  
            std::string name;
            std::string email;
            std::string phone;
            Card card; 

                                
        public:
                        // Konstruktor – används när vi skapar en ny användare
        User
        (const std::string& id, const std::string& name,
        const std::string& email, const std::string& phone,
        const Card& card);

        
                         // Getters – används för att hämta information
        std::string getId() const;
        std::string getName() const;
        std::string getEmail() const;
        std::string getPhone() const;
        Card getCard() const;


                        // Setters – används för att ändra information

        void setName(const std::string& newName);
        void setEmail(const std::string& newEmail);
        void setPhone(const std::string& newPhone);


                        // Funktion för att skriva ut all info om användaren
        void printInfo() const;

};
#endif
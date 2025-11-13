#include "../include/User.hpp"
#include <iostream>

            // Konstruktor – här sparas all information när vi skapar en användare
User::User
    (const std::string& id, const std::string& name,
     const std::string& email, const std::string& phone,
     const Card& card)
    : id(id), name(name), email(email), phone(phone), card(card) {}


    // Getters – returnerar värden från objektet
std::string User::getId() const { return id; }
std::string User::getName() const { return name; }
std::string User::getEmail() const { return email; }
std::string User::getPhone() const { return phone; }
Card User::getCard() const { return card; }


                // Setters – ändrar värden i objektet
void User::setName(const std::string& newName) { name = newName; }
void User::setEmail(const std::string& newEmail) { email = newEmail; }
void User::setPhone(const std::string& newPhone) { phone = newPhone; }


                // Skriver ut all information om användaren till terminalen
void User::printInfo() const {
    std::cout << "User ID: " << id << "\n"
              << "Name: " << name << "\n"
              << "Email: " << email << "\n"
              << "Phone: " << phone << "\n"
              << "Card ID: " << card.getId() << "\n"
              << "Card Clearance: " << card.getClearanceLevel() << "\n";
}

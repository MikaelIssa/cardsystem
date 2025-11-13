#include "../include/Admin.hpp"
#include <iostream>

                        // Konstruktor här sparas all information när vi skapar en admin
Admin::Admin(const std::string& id, const std::string& password,
             const std::string& name, const std::string& email,
             const std::string& phone, const Card& card)
    : id(id), password(password), name(name), email(email), phone(phone), card(card) {}


                                        // Getters där vi retunerar värden från objektet
std::string Admin::getId() const { return id; }
std::string Admin::getPassword() const { return password; }
std::string Admin::getName() const { return name; }
std::string Admin::getEmail() const { return email; }
std::string Admin::getPhone() const { return phone; }
Card Admin::getCard() const { return card; }


                                        // Setters ändrar värden i objektet
void Admin::setName(const std::string& newName) { name = newName; }
void Admin::setEmail(const std::string& newEmail) { email = newEmail; }
void Admin::setPhone(const std::string& newPhone) { phone = newPhone; }
void Admin::setPassword(const std::string& newPassword) { password = newPassword; }


                                         // skriver ut all information om admin till konsolen
void Admin::printInfo() const {
    std::cout << "AdminID: " << id << "\n"
              << "Namn: " << name << "\n"
              << "Email: " << email << "\n"
              << "Telefon: " << phone << "\n"
              << "Kort-ID: " << card.getId() << "\n"
              << "Kortnivå: " << card.getClearanceLevel() << "\n";
}

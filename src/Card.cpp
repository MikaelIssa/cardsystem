#include "../include/Card.hpp"


        // Konstruktor – sparar ID och säkerhetsnivå
Card::Card(const std::string& id, int clearanceLevel)
        : id(id), clearanceLevel(clearanceLevel) {}


                // Returnerar kortets ID
std::string Card::getId() const { return id; }

                    // Returnerar kortets säkerhetsnivå
int Card::getClearanceLevel() const { return clearanceLevel; }
#include "../include/Card.hpp"

Card::Card(const std::string& id, int clearanceLevel)
        : id(id), clearanceLevel(clearanceLevel) {}

std::string Card::getId() const { return id; }
int Card::getClearanceLevel() const { return clearanceLevel; }
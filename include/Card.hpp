
#ifndef CARD_HPP
#define CARD_HPP

#include <string>

class Card { // definderar klassen Card
    // privata variabler för Card klassen kan bara nps utifrån getters
    private:
        std::string id;
        int clearanceLevel;
     
        //funktionen gör att jag skapar ett nytt kort med ett id och behörigetsnivå
    public:
            Card(const std::string& id, int clearanceLevel);

            //hämtar värderna ifrån objektet

            std::string getId() const;
            int getClearanceLevel() const;
};
#endif

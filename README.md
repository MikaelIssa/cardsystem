struktur : 
card-access-system/
├── data/         # Här ligger alla CSV-filer: users.csv, admins.csv, cards.csv, floors.csv
├── include/      # Header-filer (.hpp) för klasser och funktioner
├── src/          # Implementering (.cpp) av all logik
├── logs/         # Tillfälliga loggar för våningsaccess (ej persistent)
├── Makefile      # Fil för att kompilera projektet
└── README.md     # Dokumentation och förklaringa


---

förklaring av varje mapp och fil
Mapp/Fil	Syfte
data/	Här sparas all information i CSV-format. Vi läser och skriver till dessa filer.
include/	Här ligger alla .hpp-filer — t.ex. . User.hpp, Admin.hpp, Card.hpp, Floor.hpp.
src/	Här ligger .cpp-filer som implementerar funktionerna — t.ex. . main.cpp, User.cpp, Admin.cpp.
logs/	Här skapas loggfiler för varje våning, t.ex. . floor1.log, som visar vem som försökt gå in.
Makefile	Den här filen används för att kompilera hela projektet med ett enkelt kommando: make.
README.md	Här skriver du vad projektet handlar om, hur det fungerar, och hur du har tänkt.

-----
BASH 
# Initiera nytt repo
git init

# Lägg till alla filer
git add .

# Gör en commit med meddelande
git commit -m "Första commit"

# Koppla till GitHub (HTTPS)
git remote add origin https://github.com/<user>/<repo>.git

# Pusha första gången (koppla branch)
git push -u origin main

# Pusha ändringar (efter första gången)
git push

# Hämta senaste från GitHub
git pull

# Se status på repo
git status

# Se brancher
git branch

# Skapa ny branch
git checkout -b feature-x

# Byt branch
git checkout main

# Slå ihop branch till main
git merge feature-x

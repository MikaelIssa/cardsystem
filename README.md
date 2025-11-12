Börjar med att förstå kraven vad systemet kommer att göra::
- Vilka roller som finns? ( User, Admin)
- vilka funktioner ska varje roll ha?
- vilka dataobjekt finns? ( User, Admin , Card Flooor) dessa kommer vi jobba med
- Vad ska vara persistent (csv)
- vad ska vara validerat ( emial , telefon, lösenord)?
- vad ska inte krascha
----------------

nu kommer strukturen hur den ska byggas
Main mappen CardSystem ska innehålla
-  data mapp (csv filer)
-  include (header filer .hpp) - alltså bluefrint till varje objekt
-  src ( kodfilerna .cpp)
- logs ( tillfälliga loggar)
- MakeFile , kompilera koden med en extension
- readme.md fil där jag ska dokummentera vad jag gjort och vad jag lärt mig och vad jag bör kolla extra på samt vad jag tagit med mig

----
Varje klass ska innehålla:
- User ska innehålla ( id, name, email, phone, card)
- Admin ska innehålla ( id, password, name, email, phone, card)
- Card ska innehålla ( id, clearamceLevel)
- Floor ska innehålla ( id, name, clearanceLevel, accesHistory)
-----

för att skippa buggar så jag tar en klass i taget som jag testar i min mian.cpp fil och kompilerar med Make
- testar om det fungerar innan jag går vidare


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

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
error :

justerart min kodingen till att ../include/ --.hpp i min .cpp fil för att den ska nå min sökväg samt jag fick error i min Makefile då jag behövde ändra i SRC /include/...hpp nu fungerar

------------------------
## 👤 User-klassen

User representerar en vanlig användare i systemet. Den innehåller:

- ID (unikt)
- Namn
- E-post
- Telefonnummer
- Kort (med säkerhetsnivå)

Jag har lagt till:
- Konstruktor för att skapa en användare
- Getters och setters för att hämta och ändra info
- `printInfo()` för att skriva ut all data

Testad i main.cpp och fungerar som det ska.

--------------------
## 🪪 Card-klassen

Card representerar ett säkerhetskort som kopplas till en användare eller admin. Kortet innehåller:

- ID (unikt)
- Säkerhetsnivå (int)

Jag har lagt till:
- Konstruktor
- Getters för att hämta ID och nivå

Kortet används i både `User` och `Admin` för att hantera åtkomst.
-------------------
## 👨‍💼 Admin-klassen

Jag har nu skapat `Admin`-klassen som representerar en administratör i systemet. Den innehåller:

- ID (unikt)
- Lösenord
- Namn
- E-post
- Telefonnummer
- Kort (med säkerhetsnivå)

Jag har lagt till funktioner för att:
- Skapa en admin med konstruktor
- Hämta och ändra information (getters och setters)
- Skriva ut all info med `printInfo()`

Jag har också testat klassen i `main.cpp` och det fungerar som det ska. Nästa steg blir att bygga menylogik för att välja mellan användare, admin eller avsluta programmet.
---------------------------------


#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <vector>
#include <iostream>
#include <fstream>
#include "Adresat.h"

#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"



using namespace std;
class AdresatManager {
    int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    Adresat podajDaneNowegoAdresata();

public:
    AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){};
     void rejestracjaUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int id);
    int pobierzIdZalogowanegoUzytkownika();
    void dodajAdresata();
    int pobierzZPlikuIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int id);
    int pobierzIdOstatniegoAdresata();
};

#endif

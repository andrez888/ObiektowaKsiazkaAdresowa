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
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();

public:

    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    :  ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika), plikZAdresatami(nazwaPlikuZAdresatami) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void ustawIdZalogowanegoUzytkownika(int id);
    int pobierzIdZalogowanegoUzytkownika();
    void rejestracjaUzytkownika();
    void dodajAdresata();
   void wczytajAdresatowZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
   void usunAdresata();

};
#endif

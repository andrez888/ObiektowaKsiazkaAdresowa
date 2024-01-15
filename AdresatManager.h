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

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:

    AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};

    void ustawIdZalogowanegoUzytkownika(int id);
    int pobierzIdZalogowanegoUzytkownika();
    void rejestracjaUzytkownika();
    void dodajAdresata();
   void wczytajAdresatowZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wylogowywanieUzytkownika();

};
#endif

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
    int idOstatniegoAdresata;

    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
     void ustawIdOstatniegoAdresata(int id);
    int pobierzIdOstatniegoAdresata();
    void ustawIdZalogowanegoUzytkownika(int id);
    int pobierzIdZalogowanegoUzytkownika();
    void rejestracjaUzytkownika();
    void dodajAdresata();
   // int pobierzZPlikuIdOstatniegoAdresata();
   void wczytajAdresatowZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wylogowywanieUzytkownika();

};
#endif

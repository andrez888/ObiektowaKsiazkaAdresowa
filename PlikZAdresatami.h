#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;
class PlikZAdresatami {
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {};

    int pobierzIdOstatniegoAdresata();
    vector <Adresat>  wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
};
#endif

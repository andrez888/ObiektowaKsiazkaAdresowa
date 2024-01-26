#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami)
    : uzytkownikManager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatManager = NULL;
    };
    ~KsiazkaAdresowa(){
        delete adresatManager;
        adresatManager = NULL;
    }

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszytskichUzytkownikow();
    void dodajAdresata();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wylogowywanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void usunAdresata();

};
#endif

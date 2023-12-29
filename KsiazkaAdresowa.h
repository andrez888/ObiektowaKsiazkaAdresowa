#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami) {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszytskichUzytkownikow();
    void dodajAdresata();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wylogowywanieUzytkownika();
    void menu();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

};
#endif

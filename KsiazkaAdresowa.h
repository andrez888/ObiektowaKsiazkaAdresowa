#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa{
 UzytkownikManager uzytkownikManager;
 AdresatManager adresatManager;
 public:
     KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami){
        uzytkownikManager.wczytajUzytkownikowZPliku();
     };
     void rejestracjaUzytkownika();
     void logowanieuzytkownika();
     void wypiszWszytskichUzytkownikow();
     void dodajAdresata();
     void zmianaHaslaZalogowanegoUzytkownika();
     void wyswietlWszystkichAdresatow();
     void wylogowywanieUzytkownika();

};
#endif

#ifndef UZYTKOWNINMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"




using namespace std;
class UzytkownikManager{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

     Uzytkownik podajDaneNowegoUzytkownika();
     int pobierzIdNowegoUzytkownika();
     bool czyIstniejeLogin(string login);

public:
    void ustawIdZalogowanegoUzytkownika(int id);
    int pobierzIdZalogowanegoUzytkownika();
    UzytkownikManager(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami){
        idZalogowanegoUzytkownika = 0;
    };
     void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika();
    void zmianaHasla();

};
#endif

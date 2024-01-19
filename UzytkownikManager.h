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
class UzytkownikManager {
    PlikZUzytkownikami plikZUzytkownikami;
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
        idZalogowanegoUzytkownika = 0;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void ustawIdZalogowanegoUzytkownika(int id);
    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    void logowanieUzytkownika();
    void wylogowywanieUzytkownika();
    void zmianaHasla();
    bool czyUzytkownikJestZalogowany();
};
#endif

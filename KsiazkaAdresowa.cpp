#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    uzytkownikManager.rejestracjaUzytkownika();
}
void  KsiazkaAdresowa :: wypiszWszytskichUzytkownikow(){
    uzytkownikManager.wypiszWszytskichUzytkownikow();
}
void KsiazkaAdresowa::logowanieuzytkownika(){
    uzytkownikManager.logowanieUzytkownika();
    adresatManager.ustawIdZalogowanegoUzytkownika(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    adresatManager.wczytajAdresatowZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata(){
    adresatManager.dodajAdresata();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikManager.zmianaHasla();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){
    adresatManager.wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::wylogowywanieUzytkownika(){
    adresatManager.wylogowywanieUzytkownika();
    uzytkownikManager.ustawIdZalogowanegoUzytkownika(0);
}



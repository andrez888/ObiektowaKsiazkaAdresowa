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
}
void KsiazkaAdresowa::dodajAdresata(){
    adresatManager.dodajAdresata();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){
    uzytkownikManager.zmianaHasla();
}



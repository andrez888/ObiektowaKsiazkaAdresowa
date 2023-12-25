#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt","Adresaci.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();

    //ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieuzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.wylogowywanieUzytkownika();
    ksiazkaAdresowa.logowanieuzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    return 0;
}

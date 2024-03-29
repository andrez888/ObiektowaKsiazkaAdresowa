#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikManager.rejestracjaUzytkownika();
}
void  KsiazkaAdresowa :: wypiszWszytskichUzytkownikow() {
    uzytkownikManager.wypiszWszytskichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikManager.logowanieUzytkownika();
    if(uzytkownikManager.czyUzytkownikJestZalogowany()) {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
}
void KsiazkaAdresowa::dodajAdresata() {
    adresatManager->dodajAdresata();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikManager.zmianaHasla();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatManager->wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::wylogowywanieUzytkownika() {
    uzytkownikManager.wylogowywanieUzytkownika();
    delete adresatManager;
    adresatManager = NULL;

    cout << "Zostales wylogowany"<<endl;
    system("pause");
}
bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {

    if(uzytkownikManager.czyUzytkownikJestZalogowany()) {
        return true;
    } else {
        return false;
    }
}
char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "3. Wypisz wszytskich uzytkownikow" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
void KsiazkaAdresowa::usunAdresata() {
    adresatManager->usunAdresata();
}
void KsiazkaAdresowa::edytujAdresata() {
    adresatManager->edytujAdresata();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatManager->wyszukajAdresatowPoNazwisku();
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatManager->wyszukajAdresatowPoImieniu();
}

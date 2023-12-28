#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikManager.rejestracjaUzytkownika();
}
void  KsiazkaAdresowa :: wypiszWszytskichUzytkownikow() {
    uzytkownikManager.wypiszWszytskichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikManager.logowanieUzytkownika();
    adresatManager.ustawIdZalogowanegoUzytkownika(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    adresatManager.wczytajAdresatowZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::dodajAdresata() {
    adresatManager.dodajAdresata();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikManager.zmianaHasla();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatManager.wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::wylogowywanieUzytkownika() {
    adresatManager.wylogowywanieUzytkownika();
    uzytkownikManager.ustawIdZalogowanegoUzytkownika(0);
    cout << "Zostales wylogowany"<<endl;
    system("pause");
}
void KsiazkaAdresowa::menu() {
    char wybor;
    while (true) {
        if (uzytkownikManager.pobierzIdZalogowanegoUzytkownika() == 0) {

            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor) {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                logowanieUzytkownika();
                break;
            case '3':
                wypiszWszytskichUzytkownikow();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {
            wybor =wybierzOpcjeZMenuUzytkownika();
            switch (wybor) {
            case '1':
                dodajAdresata();
                break;
            /* case '2':
                 wyszukajAdresatowPoImieniu(adresaci);
                 break;
             case '3':
                 wyszukajAdresatowPoNazwisku(adresaci);
                 break;*/
            case '4':
                wyswietlWszystkichAdresatow();
                break;
            /*case '5':
                idUsunietegoAdresata = usunAdresata(adresaci);
                idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                edytujAdresata(adresaci);
                break;*/
            case '7':
                zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                wylogowywanieUzytkownika();
                break;
            }
        }
    }
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

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    /* cout << "2. Wyszukaj po imieniu" << endl;
     cout << "3. Wyszukaj po nazwisku" << endl;*/
    cout << "4. Wyswietl adresatow" << endl;
    /*cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;*/
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}


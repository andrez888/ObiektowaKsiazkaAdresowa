#include "UzytkownikManager.h"

void UzytkownikManager::rejestracjaUzytkownika() {
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikManager::podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do {
        cout <<endl;
        cout << "Podaj login: ";
        uzytkownik.ustawLogin(MetodyPomocnicze::wczytajLinie());
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(MetodyPomocnicze::wczytajLinie());

    return uzytkownik;
}

int UzytkownikManager::pobierzIdNowegoUzytkownika() {
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikManager::czyIstniejeLogin(string login) {

    for(size_t i = 0 ; i < uzytkownicy.size() ; i++) {
        if(uzytkownicy[i].pobierzLogin() == login) {
            cout << "Istnieje juz taki login";
            return true;
        }
    }
    return false;
}
void UzytkownikManager::wypiszWszytskichUzytkownikow() {
    for(Uzytkownik uzytkownik : uzytkownicy) {
        cout <<endl<< uzytkownik.pobierzId();
        cout <<endl << uzytkownik.pobierzLogin();
        cout << endl << uzytkownik.pobierzHaslo() <<endl;
    }
    system("pause");
}
void UzytkownikManager::wczytajUzytkownikowZPliku() {
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
void UzytkownikManager::ustawIdZalogowanegoUzytkownika(int id ) {
    idZalogowanegoUzytkownika = id;
}
void UzytkownikManager::logowanieUzytkownika() {

    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << "Podaj login: "  << endl;
    login = MetodyPomocnicze::wczytajLinie();
    for(size_t i = 0; i < uzytkownicy.size(); i++) {
        if(uzytkownicy[i].pobierzLogin() == login) {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--) {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo()==haslo) {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika = uzytkownicy[i].pobierzId();
                    return;
                }
            }
            cout << "Podano 3 razy bledne haslo" <<endl;
            system("pause");
            return;
        }
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
}
int UzytkownikManager::pobierzIdZalogowanegoUzytkownika() {
    return idZalogowanegoUzytkownika;
}
void UzytkownikManager::zmianaHasla() {
    Uzytkownik uzytkownik;
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = MetodyPomocnicze::wczytajLinie();

    for(size_t i = 0 ; i < uzytkownicy.size() ; i++) {
        if(uzytkownicy[i].pobierzId() == pobierzIdZalogowanegoUzytkownika()) {
            uzytkownicy[i].ustawHaslo(noweHaslo);
        }
    }
    system("pause");
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}
bool UzytkownikManager::czyUzytkownikJestZalogowany(){
    if(idZalogowanegoUzytkownika > 0){
        return true;
    }else{
        return false;
    }
}


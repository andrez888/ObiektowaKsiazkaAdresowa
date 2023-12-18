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

    for(size_t i = 0 ; i < uzytkownicy.size() ; i++){
        if(uzytkownicy[i].pobierzLogin() == login){
            cout << "Istnieje juz taki login";
            return true;
        }
    }
    return false;
}
void UzytkownikManager::wypiszWszytskichUzytkownikow(){
    for(Uzytkownik uzytkownik : uzytkownicy){
        cout <<endl<< uzytkownik.pobierzId();
        cout <<endl <<uzytkownik.pobierzLogin();
        cout << endl <<uzytkownik.pobierzHaslo() <<endl;
    }
}
void UzytkownikManager::wczytajUzytkownikowZPliku(){
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}
void UzytkownikManager::ustawIdZalogowanegoUzytkownika(int id ){
    idZalogowanegoUzytkownika = id;
}
void UzytkownikManager::logowanieUzytkownika(){

    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    login = MetodyPomocnicze::wczytajLinie();
    for(size_t i = 0; i < uzytkownicy.size(); i++){
        if(uzytkownicy[i].pobierzLogin() == login){
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (uzytkownicy[i].pobierzHaslo()==haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                   ustawIdZalogowanegoUzytkownika(uzytkownicy[i].pobierzId());
                }
        }

    }
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    ustawIdZalogowanegoUzytkownika(0);
}
int UzytkownikManager::pobierzIdZalogowanegoUzytkownika(){
    return idZalogowanegoUzytkownika;
}


#include "AdresatManager.h"

void AdresatManager::ustawIdZalogowanegoUzytkownika(int id){
    idZalogowanegoUzytkownika = id;

}
int AdresatManager::pobierzIdZalogowanegoUzytkownika(){
    return idZalogowanegoUzytkownika;
}
void AdresatManager::ustawIdOstatniegoAdresata(int id){
    idOstatniegoAdresata = id;
}
int AdresatManager::pobierzIdOstatniegoAdresata(){
    return idOstatniegoAdresata;
}
Adresat AdresatManager::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawId(pobierzIdOstatniegoAdresata() + 1);

    adresat.ustawIdUzytkownika(pobierzIdZalogowanegoUzytkownika());

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
   // adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze ::wczytajLinie());
    //adresat.nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void AdresatManager::dodajAdresata(){

    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
    ustawIdOstatniegoAdresata(pobierzIdOstatniegoAdresata()+1);

}
void AdresatManager::wczytajAdresatowZalogowanegoUzytkownika(){
    if(idZalogowanegoUzytkownika!=0){
        ustawIdOstatniegoAdresata(plikZAdresatami.pobierzZPlikuIdOstatniegoAdresata());
     adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(pobierzIdZalogowanegoUzytkownika());
    }
}
void AdresatManager::wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}
void AdresatManager::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}
void AdresatManager::wylogowywanieUzytkownika(){
    adresaci.clear();
    ustawIdZalogowanegoUzytkownika(0);
}

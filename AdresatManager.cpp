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
    //dopiszAdresataDoPliku(adresat);
    ustawIdOstatniegoAdresata(pobierzIdOstatniegoAdresata()+1);

}

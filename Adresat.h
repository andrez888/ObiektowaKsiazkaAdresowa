#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {
    int id;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres ;

public:
    Adresat(int id=0, int idUzytkownika=0, string imie="", string nazwisko="", string numerTelefonu="", string email="", string adres="") {

        this->id = id;
        this->idUzytkownika = idUzytkownika;
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;
    }
    void ustawId(int idAdresata);
    void ustawIdUzytkownika(int IDUZYTKOWNIKA);
    void ustawImie(string IMIE);
    void ustawNazwisko(string NAZWISKO);
    void ustawNumerTelefonu(string NUMERTELEFONU);
    void ustawEmail(string EMAIL);
    void ustawAdres(string ADRES);

    int pobierzId();
    int pobierzIdZalgowanegoUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();

};
#endif

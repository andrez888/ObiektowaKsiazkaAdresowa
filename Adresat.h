#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {
    int id;
    int idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres ;

public:
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

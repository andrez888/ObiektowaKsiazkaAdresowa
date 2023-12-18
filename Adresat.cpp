#include "Adresat.h"

void Adresat::ustawId(int idAdresata) {
    id = idAdresata;
}
void Adresat::ustawIdUzytkownika(int IDUZYTKOWNIKA) {
    idUzytkownika = IDUZYTKOWNIKA;
}
void Adresat::ustawImie(string IMIE) {
    imie = IMIE;
}
void Adresat::ustawNazwisko(string NAZWISKO) {
    nazwisko = NAZWISKO;
}
void Adresat::ustawNumerTelefonu(string NUMERTELEFONU) {
    numerTelefonu = NUMERTELEFONU;
}
void Adresat::ustawEmail(string EMAIL) {
    email = EMAIL;
}
void Adresat::ustawAdres(string ADRES) {
    adres = ADRES;
}
int Adresat::pobierzId() {
    return id;
}
int Adresat::pobierzIdZalgowanegoUzytkownika() {
    return idUzytkownika;
}
string Adresat::pobierzImie() {
    return imie;
}
string Adresat::pobierzNazwisko() {
    return nazwisko;
}
string Adresat::pobierzNumerTelefonu() {
    return numerTelefonu;
}
string Adresat::pobierzEmail() {
    return email;
}
string Adresat::pobierzAdres() {
    return adres;
}


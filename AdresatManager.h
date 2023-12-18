#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <vector>
#include "Adresat.h"

#include "PlikZAdresatami.h"



using namespace std;
class AdresatManager {
    int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;

public:
    AdresatManager(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){};
     void rejestracjaUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int id);
    void dodajAdresata();
    int pobierzZPlikuIdOstatniegoAdresata();
};

#endif

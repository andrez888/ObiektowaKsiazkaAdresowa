#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <string>
#include <iostream>
#include <fstream>


using namespace std;
class PlikZAdresatami {
    const string nazwaPlikuZAdresatami;
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    int pobierzZPlikuIdOstatniegoAdresata();
};
#endif

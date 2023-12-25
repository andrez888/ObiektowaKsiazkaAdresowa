#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <sstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


using namespace std;

class MetodyPomocnicze{
public:
    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static bool czyPlikJestPusty(fstream &plikTekstowy);
};
#endif

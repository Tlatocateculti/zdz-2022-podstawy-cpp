#include <iostream>

using namespace std;

int main()
{
    char znak = 'A';
    bool zaleglosc=false;
    short liczba_krotka = 45;
    int liczba_calkowita = -150;
    long dluga_calkowita = 49;
    long long bardzo_dluga = 9894;
    float zm_przecinkowa=1.67;
    double zm_podwojona_przecinek = -9.56;

    unsigned short bz_liczba_krotka = 90;
    unsigned int bz_liczba_calkowita =116;
    unsigned long bz_dluga_calkowita = 908;
    unsigned long  long bz_bardzo_dluga = 6577;
    unsigned char bz_znak = 'g';
    //void pustka;

    int wynik = bz_znak + dluga_calkowita;

    cout << "Wynik obliczen " << wynik;

    cout << endl << "Typ zmiennej char zajmuje " << sizeof(char) << " bajtów";
    cout << endl << "Typ zmiennej bool zajmuje " << sizeof(bool) << " bajtów";
    cout << endl << "Typ zmiennej short zajmuje " << sizeof(short) << " bajtów";
    cout << endl << "Typ zmiennej int zajmuje " << sizeof(int) << " bajtów";
    cout << endl << "Typ zmiennej long zajmuje " << sizeof(long) << " bajtów";
    cout << endl << "Typ zmiennej long long zajmuje " << sizeof(long long) << " bajtów";
    cout << endl << "Typ zmiennej float zajmuje " << sizeof(float) << " bajtów";
    cout << endl << "Typ zmiennej double zajmuje " << sizeof(double) << " bajtów";

    cout << endl << "Typ zmiennej ulong zajmuje " << sizeof(unsigned long) << " bajtów" << endl;

    /* <- otwracie komentarza wieloniniowego
      Poniże pojawią się przykłady operatorów w C++.
      Zostaną ukazane najpopularniejsze operatory arytmetyczne,. logiczne oraz bitowe
    */ //<-zamknięcie komentarza wieloliniowego

    //OPERATORY ARYTMETYCZNE /*   */ //
    cout << "Operatory arytmetyczne: " << endl;
    int suma = 56 + 100;        //dodawanie
    int roznica = 78 - 15;      //odejmowanie
    int mnozenie = 4 * 12;      //mnożenie
    int dzielenie = 66 / 3;     //dzielnie
    int modulo = 67 % 3;        //modulo (reszta z dzielenia)

    cout << suma << endl << roznica << endl << mnozenie << endl << dzielenie << endl << modulo << endl;

    //OPERATORY LOGICZNE
    cout << "Operatory logiczne: " << endl;
    bool mniejsze1 = 67  < 100;
    bool mniejsze2 = 100  < 98;
    bool mniejszewieksze1 = 67  <= 100;
    bool mniejszewieksze2 = 100  <= 100;
    bool wieksze1 = 67  > 100;
    bool wieksze2 = 120  > 100;
    bool wiekszemniejsze1 = 67  >= 100;
    bool wiekszemniejsze2 = 100  >= 100;
    bool rowne1 =  5==5;
    bool rowne2 = 5==8;
    bool nierowne1 = 7!=9;
    bool nierowne2 = 9!=9;

    bool oraz1 = wiekszemniejsze2 && rowne1;
    bool oraz2 = wiekszemniejsze2 && rowne2;

    bool lub1 = wiekszemniejsze2 || rowne2;
    bool lub2 = rowne2 || nierowne2;

    cout << mniejsze1 << endl << mniejsze2 << endl
         << mniejszewieksze1 << endl << mniejszewieksze2 << endl
         << wieksze1 << endl << wieksze2 << endl
         << wiekszemniejsze1 << endl << wiekszemniejsze2 << endl
         << rowne1 << endl << rowne2 << endl
         << nierowne1 << endl << nierowne2 << endl
         << oraz1 << endl << oraz2 << endl
         << lub1 << endl << lub2 << endl;

    //OPERATORY BINARNE
    cout << "Operatory binarne: " << endl;
    int op = 6;
    int op2 = 1024;

    int a = op<<4;
    int b = op<<7;
    int c = op2>>8;
    int d = op2>>4;
    int e = 39&13;
    int f = 39|8;
    int g = 39^13;
    int h = ~op;

    cout << a << endl << b << endl
         << c << endl << d << endl
         << e << endl << f << endl
         << g << endl << h << endl;

    return 0;
}

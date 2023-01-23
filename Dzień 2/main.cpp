#include <iostream>
#include <string>
#include <linux/a.out.h>
using namespace std;


int main()
{
    Systemtime dzis;
    GetLocalTime (&dzis);

    int rok = dzis.wYear, rokUrodzenia,

    string imie;

    cout <<"Podaj swoje imie";
    cin>> imie;

    cout <<"Rok urodzenia ";
    cin rokUrodzenia;

    cout <<imie <<  "masz juz" <<rok - rok urodzenia << "lat"  << endl;

    return 0
    }




    /*string imie;
    int wiek;


    cout <<"Podaj imie ";
    cin >> imie;

    cout <<"Podaj wiek  ";
    cin>> wiek;

    cout <<"dane poprawne? " <<cin.good () << endl;
  cout <<"dane niepoprawne? " <<cin.fail()  << endl;


    cout <<"Witaj w kursie " << imie << endl;
    cout << imie   << " ma " << wiek << " lat" << endl;


    return 0;
}*/

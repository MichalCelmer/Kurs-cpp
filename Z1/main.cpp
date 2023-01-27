#include <iostream>
#include <string>

using namespace std;

int main()
{
 string imie = "Michał ", nazwisko = "Celmer ", osoba;
 int wiek= 22;

 cout << "Pan " << imie << nazwisko << "wiek " << wiek << endl;

 osoba = imie + nazwisko;
 cout << "Pan: " << osoba << "wiek: " << wiek << endl;

 return 0;
}

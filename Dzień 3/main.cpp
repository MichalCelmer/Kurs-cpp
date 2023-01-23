#include <iostream>
#include <string>

using namespace std;

int main()
{
    double produkty [5][5] ={
       {1, 3.58, 5, 10, 2},
        {2, 9.61, 5, 25, 5},
        {3, 8.52, 8, 18, 3},
        {4, 10.25, 8, 36, 6},
        {5, 6.17, 23, 4, 1}
    };

    int licznik;
    double cenaBrutto;

    for(licznik=0;licznik <=4; licznik++)
    {
    cenaBrutto = produkty[licznik][1] + ((produkty[licznik] [2]/100) * produkty[licznik] [1]);


    cout<< "Towar ID: " << produkty[licznik] [0] <<endl;
        cout<< "Cena netto: " << produkty[licznik] [1] <<endl;
         cout<< "Cena brutto: " << cenaBrutto <<endl;
          cout<< "Stawka VAT" <<produkty[licznik][2]<< "%"<< endl;
          cout<< "cenaa pudelak" <<produkty[licznik][3] * cenaBrutto<< "%l"<< endl;

        cout <<"__________________________________________________________________________________"<<endl;
    }






   return 0;
}

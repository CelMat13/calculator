#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;


float dodawanie(float a, float b, float c);
float odejmowanie (float a, float b, float c);
float mnozenie (float a, float b, float c);
float dzielenie (float a, float b, float c);
long double potegowanie(long double a, long double b, long double c);

int i;
float a,b,c;


int main()
{
    for( ; ; )
    {
        cout<<"..MENU.."<<endl;
        cout<<"1-dodawanie"<<endl;
        cout<<"2-odejmowanie"<<endl;
        cout<<"3-mnozenie"<<endl;
        cout<<"4-dzielenie"<<endl;
        cout<<"5-potegowaie"<<endl;

        cout<<"0-KONIEC"<<endl;

        cin>>i;

        switch (i)
        {
            case 1:
                cout<<"Kalkulator bedzie dodawal: "<<endl;

                dodawanie(a, b, c);

                break; continue;


            case 2:
                cout<<"Kalkulator bedzie odejmowal: "<<endl;

                odejmowanie (a, b,c);

                break; continue;


            case 3:
                cout<<"Kalkulator bedzie mnozyl: "<<endl;

                mnozenie(a, b, c);

                break; continue;


            case 4:
                cout<<"Kalkulator bazdie dzielilL :"<<endl;

                dzielenie (a, b, c);

                break; continue;


            case 5:
                cout<<"Kalkulator bedzie potegowal: "<<endl;

                potegowanie(a,b,c);

                break; continue;







            case 0:
                cout<<"Program konczy dzialanie"<<endl;

                exit(0);





        }
    }





    return 0;
}


float dodawanie (float a, float b, float c)
    {
        cout<<"Podaj pierwsza zmienna: "; cin>>a;
        cout<<"podaj druga zmienna: "; cin>>b;

        c=a+b;
        cout<<"Wynik to: "<<c<<endl;

        return c;
    }


float odejmowanie (float a, float b, float c)
    {
        cout<<"Podaj pierwsza zmienna: "; cin>>a;
        cout<<"podaj druga zmienna: "; cin>>b;

        c=a-b;
        cout<<"Wynik to: "<<c<<endl;

        return c;
    }

float mnozenie (float a, float b, float c)
    {
        cout<<"Podaj pierwsza zmienna: "; cin>>a;
        cout<<"podaj druga zmienna: "; cin>>b;

        c=a*b;
        cout<<"Wynik to: "<<c<<endl;

        return c;
    }


float dzielenie (float a, float b, float c)
    {
        cout<<"Podaj pierwsza zmienna: "; cin>>a;
        cout<<"podaj druga zmienna: "; cin>>b;

        c=a/b;
        cout<<"Wynik to: "<<c<<endl;

        return c;
    }

long double potegowanie (long double a, long double b, long double c)
    {
        cout<<"Podaj pierwsza zmienna: "; cin>>a;
        cout<<"podaj druga zmienna: "; cin>>b;

        c=a+b;
        cout<<"Wynik to: "<<c<<endl;

        return c;
    }

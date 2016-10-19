#include <iostream>
#include <iomanip>

using namespace std;

int *pierwsza_ujemna(int *tab, int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]<0)
            return &tab[i];
    }
    return NULL;
}


int main()
{
    int n=8;
    int tablica[n]={1,2,4,-3,2,-1,0,13};
    cout<<&tablica[3]<<endl; // sprawdzenie adresu wartoœci ujemnej w tablicy
    cout<<pierwsza_ujemna(tablica,n);

    return 0;
}


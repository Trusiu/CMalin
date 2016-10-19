#include <iostream>
#include <conio.h>

using namespace std;

int function1(int *firEl , int lastEl)
{
    int maximum = *firEl;
    for(*firEl; firEl!=lastEl; *firEl++)
    {
        if(maximum > *firEl) maximum = *firEl;
        cout<<maximum<<endl;
    }

}

int main()
{
    int firEl[4] = {1,3,2,3};
    int maximum=0;
    cout<<function1(firEl, firEl[3]);
    return 0;
}

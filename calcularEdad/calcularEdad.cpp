#include <iostream>
using namespace std;
int main()
{
    int JRAM_aa, JRAM_ma, JRAM_da, JRAM_an, JRAM_mn, JRAM_dn, JRAM_a, JRAM_m, JRAM_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> JRAM_aa >> JRAM_ma >> JRAM_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> JRAM_an >> JRAM_mn >> JRAM_dn;

    if (JRAM_da > JRAM_dn)
    {

        JRAM_d = JRAM_da - JRAM_dn;
    }
    else
    {
        JRAM_da = JRAM_da + 30;
        JRAM_ma = JRAM_ma - 1;
        JRAM_d = JRAM_da - JRAM_dn;
    }

    if (JRAM_ma > JRAM_mn)
    {

        JRAM_m = JRAM_ma - JRAM_mn;
    }
    else
    {

        JRAM_ma = JRAM_ma + 12;
        JRAM_aa = JRAM_aa - 1;
        JRAM_m = JRAM_ma - JRAM_mn;
    }
    JRAM_a = JRAM_aa - JRAM_an;

    cout << "Usted tiene " << JRAM_a << " años, " << JRAM_m << " meses," << JRAM_d << " dias" << endl;
    return 0;
}
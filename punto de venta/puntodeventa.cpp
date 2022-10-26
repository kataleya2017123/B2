
#include <iostream>
using namespace std;
int main()
{
    float JRAM_x, JRAM_s = 0, JRAM_vb, JRAM_piva = 12, JRAM_viva, JRAM_pdesc = 10, JRAM_vdesc, JRAM_vn;
    int JRAM_i = 0, JRAM_l;
    cout << "Ingrese l: ";
    cin >> JRAM_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> JRAM_x;
        JRAM_i = JRAM_i + 1;
        JRAM_s = JRAM_s + JRAM_x;
    } while (JRAM_i < JRAM_l);
    JRAM_vb = JRAM_s;
    JRAM_viva = JRAM_vb * JRAM_piva / 100;
    JRAM_vdesc = JRAM_vb * JRAM_pdesc / 100;
    JRAM_vn = JRAM_vb + JRAM_viva - JRAM_vdesc;
    cout << "El valor a pagar es de: " << JRAM_vn << endl;
    return 0;
}
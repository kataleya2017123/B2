#include<iostream>
using namespace std;

int main () {
    float JRAM_x,JRAM_s=0.0;
    int JRAM_i=0, JRAM_l;
    cout<<"Ingrese el valor de JRAM_l: ";
    cin>>JRAM_l;
    do{
        cout<<"Ingrese el valor de JRAM_x: ";
        cin>>JRAM_x;
        JRAM_i=JRAM_i+1;
        JRAM_s=JRAM_s+JRAM_x;
    }while(JRAM_i<JRAM_l);

    cout <<"La suma de los numeros fue: "<<JRAM_s<<endl;
    return 0;

}
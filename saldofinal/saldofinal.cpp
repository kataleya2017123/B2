#include <iostream>
using namespace std;
int main ()
{
	float JRAM_x,JRAM_s=0;
	int JRAM_i=0,JRAM_l;
	cout<<"Ingrese numero de egresos  ";cin>>JRAM_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>JRAM_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>JRAM_x;
	JRAM_i=JRAM_i+1;
	JRAM_s=JRAM_s-JRAM_x;

	}while(JRAM_i<JRAM_l);
	cout<<"El saldo final es: "<<JRAM_s<<endl;
	return 0;
}
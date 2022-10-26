#include <iostream>
using namespace std;
int main ()
{
	float JRAM_x,JRAM_s=0,JRAM_s1=0,JRAM_s5=0;
	int JRAM_i=0,JRAM_l,JRAM_i1=0,JRAM_i5=0;
	cout<<"Ingrese l: ";cin>>JRAM_l;
	do{

	cout<<"Ingrese x: ";cin>>JRAM_x;
	JRAM_i=JRAM_i+1;
	JRAM_s=JRAM_s+JRAM_x;
	if(JRAM_x==1){
		JRAM_i1=JRAM_i1+1;
		JRAM_s1=JRAM_s1+JRAM_x;
	}else{

		JRAM_i5=JRAM_i5+1;
		JRAM_s5=JRAM_s5+JRAM_x;
	}

	}while(JRAM_i<JRAM_l);
	cout<<"La cantidad de monedas es: "<<JRAM_i<<endl;
	cout<<"El valor es: "<<JRAM_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<JRAM_i1<<endl;
	cout<<"El valor es: "<<JRAM_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<JRAM_i5<<endl;
	cout<<"La cantidad de moneda es: "<<JRAM_s5<<endl;
	return 0;
}
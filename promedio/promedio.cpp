#include <iostream>
using namespace std;
int main ()
{
	float JRAM_x,JRAM_pm=0;
	int JRAM_i=0,JRAM_l;
	cout<<"Ingrese l: ";cin>>JRAM_l;
	do{
	
	cout<<"Ingrese x: ";cin>>JRAM_x;
	JRAM_i=JRAM_i+1;
	if(JRAM_x>JRAM_pm){
		JRAM_pm=JRAM_x;
	}
	
	}while(JRAM_i<JRAM_l);
	cout<<"El promedio maximo del curso es: "<<JRAM_pm<<endl;
	return 0;
}
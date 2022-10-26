#include <iostream>
using namespace std;
int main () 
{
	float JRAM_imc,JRAM_peso,JRAM_altura;
	cout<<"Ingrese el peso (kg): ";cin>>JRAM_peso;
	cout<<"Ingrese la altura (metros): ";cin>>JRAM_altura;
	JRAM_imc=JRAM_peso/(JRAM_altura*JRAM_altura);
	if(JRAM_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(JRAM_imc>=18.5 && JRAM_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(JRAM_imc>=25 && JRAM_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(JRAM_imc>=27 && JRAM_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(JRAM_imc>=30 && JRAM_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(JRAM_imc>=35 && JRAM_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(JRAM_imc>=40 && JRAM_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(JRAM_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
main(){
	
	char lapiz, lapicero, cuaderno;
	cout<<"Trae lapiz (s/n): ";
	cin>>lapiz;
	cout<<"Trae lapicero (s/n): ";
	cin>>lapicero;
	cout<<"Trae cuaderno (s/n): ";
	cin>>cuaderno;
	
	if(lapiz =='s' || lapicero == 's' && cuaderno == 's')
	{
		cout<<"Ingresa"<<endl;
	}else{
		cout<<"Lo siento no puede ingresar"<<endl;
	}
}

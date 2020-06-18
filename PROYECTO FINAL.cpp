#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>	
class aeropuerto
{
	private:
		char nombre[30];
	public:
		void gnombre();
		int opc;
		int kil;
		int peso;
		int tipo;
	
};
class opciones: private aeropuerto
{
	protected:
		int preciomes=0;
	public:
		int costoviaje;	
	void asiento();
	void edad();
	void clase();
	void kilometros();
	void periodo();
	void pesoe();
	void mascota();
	void cosas();
	void tipoviaje();
	void pago();
	void precio();
};
void aeropuerto::gnombre()
{
		gets(nombre);
} 
void opciones::asiento()
{
	printf("\n\nEn que tipo de asiento desea viajar?\n\n1...ventanilla\n2...pasillo\n>>");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			tipo=printf("Elijio del lado de la ventanilla\n\n");
			break;
		case 2:
			tipo=printf("Elijio del lado del pasillo\n\n");
			break;
	}
}
void opciones::edad()
{
	int edad;
	printf("\nteclea tu edad\n>>");
	scanf("%d",&edad);
	if(edad<18)
	costoviaje=costoviaje-(costoviaje*.50);
}
void opciones::clase()
{
	printf("\n\n\nQue tipo de clase sera su viaje?\n\n1...VIP\n2...Turista\n>>");
	scanf("%d", &opc);	
	switch(opc)
	{
		case 1:
			costoviaje=costoviaje+(costoviaje*.30);
			break;
		case 2:
			costoviaje=costoviaje+0;
			break;
	}
}
void opciones::kilometros()
{
	printf("\n\n\nCuantos kilometros a recorrido en nuestra aerolinea?\n>>");
	scanf("%d", &kil);
	if(kil>3000)
		costoviaje=costoviaje-(costoviaje*.10);
}	
void opciones::periodo()
{
	printf("\n\n\nEn que temporada desea viajar?\n\n1...temporada alta\n2...temporada baja\n>>");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			costoviaje=costoviaje+(costoviaje*.25);
			break;
		case 2:
			costoviaje=costoviaje+0;
			break;
	}
}		
void opciones::pesoe()
{
	printf("\n\n\nCual es el peso de su equipaje(en kg.)?\n>>");
	scanf("%d", &peso);
	if(peso>5)
	costoviaje=costoviaje+100;
	else
	costoviaje=costoviaje+0;
}	
void opciones::mascota()
{
	printf("\n\n\nViajara con alguna mascota?\n\n1...si\n2...no\n>>");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			costoviaje=costoviaje+150;
			break;
		case 2:
			costoviaje=costoviaje+0;
			break;
	}
}
void opciones::cosas()
{
	printf("\n\n\nDesea comprar cosas adicionales?\n\n1...maleta-$300\n2...chocolate-$20\n3...periodico/revista-$30\n4...nada\n>>");		
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			costoviaje=costoviaje+300;
			break;
		case 2:
			costoviaje=costoviaje+20;
			break;
		case 3:
			costoviaje=costoviaje+30;
			break;
		case 4:
			costoviaje=costoviaje+0;
			break;
	}		
}
void opciones::tipoviaje()
{
	printf("\n\n\nComo sera su viaje?\n\n1...viaje de ida\n2...viaje redondo\n>>");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			costoviaje=costoviaje+0;
			break;
		case 2:
			costoviaje=costoviaje*2;
			break;
	}
}
void opciones::pago()
{
	printf("\n\n\nCual sera su tipo de pago?\n\n1...efectivo\n2...tarjeta(3 meses sin intereses)\n>>");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			costoviaje=costoviaje+0;
			break;
		case 2:
			preciomes=costoviaje/3;
			break;
	}
}
void opciones::precio()
{
	if(preciomes==0)
	{
		printf("\n\n\t\t\tEl precio de tu boleto es: $%d\n\n",costoviaje);
		printf("\n********************************************************************\n\n\n\n\n\n");
	}
	else
	{
		printf("\n\t\t\tEl precio de tu boleto es: $%d\n\t\t\tcon una mensualidad a tres meses de: $%d\n\n",costoviaje,preciomes);
		printf("\n********************************************************************\n\n\n\n\n\n");
	}
}
main()
{
	system("color 37");
	int opc1;
	aeropuerto a;
	opciones o;
	char nombre[25];
	char apellido[25];
	char apellido1[25];
	printf("\t\tBIENVENIDO A AEROLINEAS Joel\n\nTeclee su nombre (nombre, apellido paterno, apellido materno)\n>>");
	scanf("%s %s %s", nombre, apellido, apellido1);
		a.gnombre();
		printf("\nEscoja el destino al que desea viajar:\n\n1...DF-Acapulco\n2...DF-cancun\n3...Guadalajara-Acapulco\n4...Guadalajara-DF\n>>");
		scanf("%d", &opc1);
		switch(opc1)
		{
			case 1:
				printf("\t\t\tEligio DF-Acapulco");
				//ruta1=Eligio DF-Acapulco
				o.costoviaje=1500;
				o.asiento();
				o.edad();
				o.clase();
				o.kilometros();
				o.periodo();
				o.pesoe();
				o.mascota();
				o.tipoviaje();
				o.cosas();
				o.pago();
				system("cls");
				printf("\n\n********************************************************************\n\t\t\tAEROLINEAS Joel\n\nNombre:%s %s %s\n", nombre, apellido, apellido1);
			break;
			case 2:
				printf("\t\t\tEligio DF-Cancun");
				//ruta2=DF-Cancun
				o.costoviaje=2500;
				o.asiento();
				o.edad();
				o.clase();
				o.kilometros();
				o.periodo();
				o.pesoe();
				o.mascota();
				o.tipoviaje();
				o.cosas();
				o.pago();
				system("cls");
				printf("\n\n********************************************************************\n\t\t\tAEROLINEAS Joel\n\nNombre:%s %s %s\n", nombre, apellido, apellido1);
			break;
			case 3:
				printf("\t\t\tEligio Guadalajara-Acapulco");
				//ruta3=Guadalajara-Acapulco
				o.costoviaje=2000;
				o.asiento();
				o.edad();
				o.clase();
				o.kilometros();
				o.periodo();
				o.pesoe();
				o.mascota();
				o.tipoviaje();
				o.cosas();
				o.pago();
				system("cls");
				printf("\n\n********************************************************************\n\t\t\tAEROLINEAS Joel\n\nNombre:%s %s %s\n", nombre, apellido, apellido1);
			break;
			case 4:
				printf("\t\t\tEligio Guadalajara-DF");
				//ruta4=Guadalajara-DF
				o.costoviaje=2000;
				o.asiento();
				o.edad();
				o.clase();
				o.kilometros();
				o.periodo();
				o.pesoe();
				o.mascota();
				o.tipoviaje();
				o.cosas();
				o.pago();
				system("cls");
				printf("\n\n********************************************************************\n\t\t\tAEROLINEAS Joel\n\n\t\t\tNombre:%s %s %s\n", nombre, apellido, apellido1);	
			break;
		}
		o.precio();
}	

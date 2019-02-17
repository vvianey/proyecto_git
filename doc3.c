doc3.c
#include<stdio.h>//libreria estandar de clausulas de rutinas de entrada y salida
#include<conio.h>//consola y puertos de entrada y salida
#include<stdlib.h>//conversor de tipos de datos
#include<math.h>//declaracion de funciones matematicas
#include<string.h>
#include <iostream>
using namespace std;
 main()
{
	/*int x=25;
	cout<<"La direccion de x es: "<<&x<<endl;*/
/*	int i=2;
	int *p;
	p=&i;
	*p=3;
	printf("i=%d",i);*/

	
	int i=2;
	int *p;
	p=&i;
	*p=3;
	printf("i=%d",&i);
	getch();
		
}

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Nodo{
	char caracter;
	struct Nodo *sig;
}*inicio,*aux,*actual,*anterior;

void crearNodo(char);
void mostrarNodos();

int main()
{
	inicio=NULL;
	string expresion;
	int tamanio;
	
	cout<<"Ingrese su expresion: "; cin>>expresion;
	tamanio=expresion.length();
	
	for(int i=0; i<tamanio; i++)
	{
		crearNodo(expresion[i]);
	}
	mostrarNodos();
	
	cout<<endl<<" #bbb !!!"<<endl;
	
	getch();
}

void crearNodo(char valor){
	actual=inicio;
	if(actual==NULL){
			aux=new Nodo();
			aux->caracter=valor;
			aux->sig=NULL;
			inicio=aux;
	}else{
		while(actual->sig!=NULL)
		{
			actual=actual->sig;
			}		
		aux=new Nodo();
		aux->caracter=valor;
		aux->sig=NULL;
		actual->sig=aux;
	}
}

void mostrarNodos()
{
	actual=inicio;
	cout<<" \nMostrar \n";
	while(actual!=NULL){
		cout<<" -> "<<actual->caracter<<" ";
		actual=actual->sig;
		cout<<endl;
	}
	cout<<"\n";
}

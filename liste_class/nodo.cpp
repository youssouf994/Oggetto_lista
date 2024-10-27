#include <iostream>
#include "nodo.h"
#include "listLib.h"

using namespace std;

nodo::nodo()
{

}


void libList::aggiungiNodo(int nuovoValore)
{
	nodo* nuovoNodo = new nodo(nuovoValore);//creo riferimento a nuovo nodo

	if (testa == nullptr)//se testa (nodo creato all'invocazione della classe libList) ha indirizzo null
	{
		testa = nuovoNodo; //allora testa assume i valori di nuovo nodo
	}

	else
	{
		nodo* nodoCorrente = testa;//altrimenti creo un riferimento ad un nodo da usare come var d'appoggio

		while (nodoCorrente->indirizzo != nullptr)//finchè non arrivo ad un nodo con indirizzo null
		{
			nodoCorrente = nodoCorrente->indirizzo;//nodo corrente si riempe con i valori del prossimo indirizzo valido
		}

		nodoCorrente->indirizzo = nuovoNodo;//quando il ciclo finisce riempo nodo corrente (cioè l'ultimo) con i vslori di nuovo nodo
	}
}

void libList::stampaLista()
{
	nodo* appoggio=testa;//creo un riferimento a nodo per avere una var d'appoggio

	while (appoggio != nullptr)//finchè nodo di appoggio non assume un indirizzo con valore null
	{
		cout << appoggio->valore << "- salvato all'indirizzo: "<<appoggio->indirizzo<<endl;//stampo valore ed indirizzo
		appoggio = appoggio->indirizzo;//mi sposto al prossimo indirizzo valido
	}
}
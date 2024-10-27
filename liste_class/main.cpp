#include <iostream>
#include "nodo.h"

using namespace std;

int main()
{
	//nodo n;
	libList list;

	list.aggiungiNodo(94);
	list.aggiungiNodo(14);
	list.aggiungiNodo(458);
	list.aggiungiNodo(18);

	list.stampaLista();

	return 0;
}
class nodo
{
	public:
		int valore;
		nodo* indirizzo;
		nodo();
		nodo(int val) : valore(val), indirizzo(nullptr) {};
};

class libList : public nodo
{
private:
	nodo* testa;

public:
	libList() : testa(nullptr) {} ;

	void aggiungiNodo(int nuovoValore);
	void stampaLista();

};
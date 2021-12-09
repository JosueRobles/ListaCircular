#include "listacircular.h"
int main()
{
    Nodo* head = NULL;
    Nodo* segundo = NULL;
    Nodo* tercero = NULL;
    head = new Nodo();
    segundo = new Nodo();
    tercero = new Nodo();
    head->data = 1;
    head->sig = segundo;
    segundo->data = 2;
    segundo->sig = third;
    tercero->data = 3;
    tercero->sig = NULL;
    print(head);
    return 0;
}

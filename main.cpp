#include "listacircular.h"
int main()
{
    Nodo* head = NULL;
    Nodo* segundo = NULL;
    Nodo* tercero = NULL;
    head = new Nodo();
    segundo = new Nodo();
    tercero = new Nodo();
    head->data = 1; //insert()
    head->sig = segundo;
    segundo->data = 2; //insert()
    segundo->sig = tercero;
    tercero->data = 3; //insert()
    tercero->sig = NULL;
    print(head);
    return 0;
}
